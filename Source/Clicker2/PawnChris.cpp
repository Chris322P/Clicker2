// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnChris.h"
#include "includes/InfInt.h"

InfInt myint1 = "15432154865413186646848435184100510168404641560358";
InfInt myint2 = 156341300544608LL;
InfInt tstInt1 = "10000000000000000";
InfInt tstInt2 = "";


// Sets default values
APawnChris::APawnChris()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APawnChris::BeginPlay()
{
	Super::BeginPlay();


	std::string test = myint1.toString();


	FString test2 = tstInt1.toString().c_str();

	InfInt testInt = tstInt1 + 1;

	FString test3 = testInt.toString().c_str();

	UE_LOG(LogTemp, Warning, TEXT("%s _____ %s"), *test2, *test3);

	
	
}

// Called every frame
void APawnChris::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APawnChris::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

