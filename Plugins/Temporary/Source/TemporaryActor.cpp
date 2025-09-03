// Fill out your copyright notice in the Description page of Project Settings.


#include "TemporaryActor.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ATemporaryActor::ATemporaryActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ATemporaryActor::BeginPlay()
{
	Super::BeginPlay();
	
	UKismetSystemLibrary::PrintString(this, TEXT("ATemporaryActor::BeginPlay()"));
}

// Called every frame
void ATemporaryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

