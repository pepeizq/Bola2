// Fill out your copyright notice in the Description page of Project Settings.

#include "BolaHibrida.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/TextRenderComponent.h"

// Sets default values
ABolaHibrida::ABolaHibrida()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapSphere")); 
	RootComponent = Sphere;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh")); 
	Mesh->AttachTo(Sphere);

	Particles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particles")); 
	Particles->AttachTo(Mesh);

	Text = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text")); 
	Text->AttachTo(Mesh);

	OnActorBeginOverlap.AddDynamic(this, &ABolaHibrida::MyOnBeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &ABolaHibrida::MyOnEndOverlap);
}

// Called when the game starts or when spawned
void ABolaHibrida::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABolaHibrida::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABolaHibrida::MyOnBeginOverlap_Implementation(AActor* MyOverlappedActor, AActor* OtherActor)
{
	FString cadena;

	cadena = "Hola desde C++!";    
	Text->SetText(FText::FromString(cadena));
}

void ABolaHibrida::MyOnEndOverlap_Implementation(AActor* MyOverlappedActor, AActor* OtherActor)
{ 
	Text->SetText(NSLOCTEXT("AnyNS", "Any", "Adios desde C++")); 
}


