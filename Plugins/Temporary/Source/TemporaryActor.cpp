// Fill out your copyright notice in the Description page of Project Settings.
// ATemporaryActor 클래스
// Temporary 플러그인 안에 있는 액터 클래스
// BeginPlay에서 Temporary 플러그인 클래스 생성 및 값 출력

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

