// Fill out your copyright notice in the Description page of Project Settings.
// UCharacterData 클래스
// Temporary 플러그인에 정의된 UObject 기반 데이터 클래스
// 다른 모듈이나 액터에서 참조 가능

#include "CharacterData.h"

UCharacterData::UCharacterData()
{
	CharacterName = "MPTestCharacter";
	MaxHealth = 100;
	CurrentHealth = MaxHealth;
	Mana = 50;
	Attack = 10;
	Speed = 5;
	Defense = 100;
}
