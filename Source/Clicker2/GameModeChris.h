// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "itemSlot.h"
#include "includes/InfInt.h"
#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeChris.generated.h"


USTRUCT(BlueprintType)
struct FInventoryItem : public FTableRowBase
{

	GENERATED_BODY()

public:

	FInventoryItem()
	{
		Name = FText::FromString("Item");
		Value = 10;
		Description = FText::FromString("Item");
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Slot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Thumbnail;



	bool operator==(const FInventoryItem& Item) const
	{
		if (ItemID == Item.ItemID)
			return true;
		else
			return false;
	}

};

UCLASS()
class CLICKER2_API AGameModeChris : public AGameModeBase
{
	GENERATED_BODY()
	
public:

private:
	InfInt money;

	UFUNCTION(BlueprintCallable)
		void AddMoney(FString _money);
		
	UFUNCTION(BlueprintPure)
		void GetMoney(FString& _money);

	UFUNCTION(BlueprintCallable)
		void SetMoney(FString _money);
};
