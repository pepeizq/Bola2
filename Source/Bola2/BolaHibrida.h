// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BolaHibrida.generated.h"

UCLASS()
class BOLA2_API ABolaHibrida : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABolaHibrida();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(Category = "Components", EditAnywhere)    
		class USphereComponent* Sphere;

	UPROPERTY(Category = "Components", EditAnywhere)    
		class UStaticMeshComponent* Mesh;

	UPROPERTY(Category = "Components", EditAnywhere, BlueprintReadOnly)    
		class UTextRenderComponent* Text;

	UPROPERTY(Category = "Components", EditAnywhere)    
		class UParticleSystemComponent* Particles;

	
UFUNCTION(BlueprintNativeEvent) 
	void MyOnBeginOverlap(AActor* MyOverlappedActor, AActor* OtherActor);
	void MyOnBeginOverlap_Implementation(AActor* MyOverlappedActor, AActor* OtherActor);

UFUNCTION(BlueprintNativeEvent) 
	void MyOnEndOverlap(AActor* MyOverlappedActor, AActor* OtherActor);
	void MyOnEndOverlap_Implementation(AActor* MyOverlappedActor, AActor* OtherActor);

};
