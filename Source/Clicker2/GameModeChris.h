// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "includes/InfInt.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeChris.generated.h"

/**
 * 
 */
UCLASS()
class CLICKER2_API AGameModeChris : public AGameModeBase
{
	GENERATED_BODY()
	
private:
	InfInt money;


//	UPROPERTY(EditAnywhere)
//		FString moneyString;
	

	UFUNCTION(BlueprintCallable)
		void AddMoney(FString _money);
		
	UFUNCTION(BlueprintPure)
		void GetMoney(FString& _money);

	UFUNCTION(BlueprintCallable)
		void SetMoney(FString _money);
};
