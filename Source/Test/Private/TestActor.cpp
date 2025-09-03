// Fill out your copyright notice in the Description page of Project Settings.

// ATestActor 클래스
// Test 모듈 안에 있는 액터 클래스
// BeginPlay에서 Temporary 플러그인 클래스 생성 및 값 출력

#include "TestActor.h"
#include "Kismet/KismetSystemLibrary.h"
// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	UKismetSystemLibrary::PrintString(this, TEXT("ATestActor::BeginPlay()"));
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

