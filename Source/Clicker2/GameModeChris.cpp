// Fill out your copyright notice in the Description page of Project Settings.

#include "GameModeChris.h"
#include "includes/InfInt.h"


//InfInt myint1 = "15432154865413186646848435184100510168404641560358";
//InfInt myint2 = 156341300544608LL;
//InfInt tstInt1 = "10000000000000000";
//InfInt tstInt2 = "";

void AGameModeChris::AddMoney(FString _money)
{
	// Den Wert(FString) in ein normalen string konvertieren, damit InfInt damit umgehen kann.
	std::string tmp(TCHAR_TO_UTF8(*_money));

	money = money + tmp;


	//DEBUG
	FString test3 = money.toString().c_str();
	UE_LOG(LogTemp, Warning, TEXT("Ges:%s, added: %s"), *test3, *_money);
}

void AGameModeChris::GetMoney(FString& _money)
{
	_money = money.toString().c_str();
}

void AGameModeChris::SetMoney(FString _money)
{
	std::string tmp(TCHAR_TO_UTF8(*_money));
	money = tmp;

	FString test2 = tmp.c_str();
	FString test3 = money.toString().c_str();
	UE_LOG(LogTemp, Warning, TEXT("Money set to: %s(%s)"), *test3, *test2);
}
