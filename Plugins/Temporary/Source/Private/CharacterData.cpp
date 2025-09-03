// Fill out your copyright notice in the Description page of Project Settings.


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
