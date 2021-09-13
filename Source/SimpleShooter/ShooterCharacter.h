// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

UCLASS()
class SIMPLESHOOTER_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	void MoveForwardBackward(float AxisValue);
	void MoveRightLeft(float AxisValue);
	void LookUpDownRate(float AxisValue);
	void LookRightLeftRate(float AxisValue);

	UPROPERTY(EditAnywhere)
	float RotationRate = 10.0f;

public:
	// Sets default values for this character's properties
	AShooterCharacter();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};