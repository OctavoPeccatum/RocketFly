// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawns/Rocket.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

ARocket::ARocket()
{
	PrimaryActorTick.bCanEverTick = false;
	

}

void ARocket::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARocket::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

