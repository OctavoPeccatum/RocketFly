// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Rocket.generated.h"

UCLASS()
class MYPROJECT2_API ARocket : public APawn
{
	GENERATED_BODY()

public:
	ARocket();

protected:
	virtual void BeginPlay() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
