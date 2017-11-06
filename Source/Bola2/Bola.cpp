// Fill out your copyright notice in the Description page of Project Settings.

#include "Bola.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/TextRenderComponent.h"
#include "UObject/Class.h"
#include "Materials/Material.h"

// Sets default values
ABola::ABola()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Raiz
	USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));

	RootComponent = SphereComponent;

	SphereComponent->InitSphereRadius(220.0f);
	SphereComponent->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

	//Bola
	UStaticMeshComponent* SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMesh")); 
	SphereVisual->AttachTo(RootComponent);

	ConstructorHelpers::FObjectFinder<UStaticMesh> SphereAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));

	if (SphereAsset.Succeeded()) 
	{ 
		SphereVisual->SetStaticMesh(SphereAsset.Object);    
		SphereVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -50.0f)); 
	}

	//Fuego
	UParticleSystemComponent* FireParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Fire Particles"));
	
	FireParticles->AttachTo(SphereVisual); 
	FireParticles->bAutoActivate = true;

	ConstructorHelpers::FObjectFinder<UParticleSystem> FireVisual(TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire"));

	if (FireVisual.Succeeded()) 
	{ 
		FireParticles->SetTemplate(FireVisual.Object); 	
	}

	//Texto
	TextRenderComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));

	TextRenderComponent->AttachTo(SphereVisual);
	TextRenderComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 110.0f));
	TextRenderComponent->SetHorizontalAlignment(EHTA_Center); TextRenderComponent->SetYScale(2.0f); TextRenderComponent->SetXScale(2.0f); TextRenderComponent->SetVisibility(true); TextRenderComponent->SetText(NSLOCTEXT("AnyNs", "Any", "Estoy que ardo"));

	//Colision
	OnActorBeginOverlap.AddDynamic(this, &ABola::MyOnBeginOverlap); 
	OnActorEndOverlap.AddDynamic(this, &ABola::MyOnEndOverlap);

	//Material
	ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	ConstructorHelpers::FObjectFinder<UMaterial> SphereMaterial(TEXT("/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel"));

	if (SphereVisualAsset.Succeeded() && SphereMaterial.Succeeded()) 
	{ 
		SphereVisual->SetStaticMesh(SphereVisualAsset.Object);    
		SphereVisual->SetMaterial(0, SphereMaterial.Object);    
		SphereVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f)); 
	}
}

// Called when the game starts or when spawned
void ABola::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABola::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABola::MyOnBeginOverlap(AActor* MyOverlappedActor, AActor* OtherActor)
{ 
	FString cadena;   
	cadena = "Hola " + OtherActor->GetName() + "!";   
	TextRenderComponent->SetText(FText::FromString(cadena)); 
}

void ABola::MyOnEndOverlap(AActor* MyOverlappedActor, AActor* OtherActor)
{ 
	TextRenderComponent->SetText(NSLOCTEXT("AnyNs", "Any", "Estoy que ardo")); 
}


