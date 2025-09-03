// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterData.generated.h"

/**
 * 
 */
UCLASS()
class TEMPORARY_API UCharacterData : public UObject
{
	GENERATED_BODY()

public:
	// 초기값 설정 가능
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	FString CharacterName = "MPTestCharacter";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 CurrentHealth = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 MaxHealth = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 Mana = 50;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 Attack = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 Speed = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 Defense = 100;

	// 생성자
	UCharacterData();

};
