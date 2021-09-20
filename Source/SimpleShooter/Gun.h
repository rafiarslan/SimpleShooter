// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class SIMPLESHOOTER_API AGun : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	USceneComponent *Root;
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent *Mesh;
	UPROPERTY(EditAnywhere)
	UParticleSystem *MuzzleFlash;
	UPROPERTY(EditAnywhere)
	UParticleSystem *ImpactEffect;
	UPROPERTY(EditAnywhere)
	float MaxRange = 1000.0f;
	UPROPERTY(EditAnywhere)
	float Damage = 10.0f;

	bool GunTrace(FHitResult &Hit, FVector &ShotDirection);
	AController *GetOwnerController() const;

public:
	// Sets default values for this actor's properties
	AGun();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void PullTrigger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
