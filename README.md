# HW10
Temporary 플러그인 제작

## 주요 파일 생성
1. Temporary.Build.cs

모듈 의존성 및 Include 경로 설정
```cpp
PublicDependencyModuleNames.AddRange(new string[] { "Core" });
PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "Engine", "Slate", "SlateCore" });
```

2. Temporary.h / Temporary.cpp

모듈 인터페이스 정의 및 Startup/Shutdown 구현
```cpp
class FTemporaryModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
IMPLEMENT_MODULE(FTemporaryModule, Temporary)
```
3. Temporary.uplugin

플러그인 정보 및 모듈 로딩 설정
```cpp
{
    "Name": "Temporary",
    "Type": "Runtime",
    "LoadingPhase": "Default",
    "CanContainContent": true
}
```
3. 타겟과 uproject 설정
3-1. Target.cs

Editor 및 Runtime 타겟에 모듈 추가
```cpp
ExtraModuleNames.Add("MP");
ExtraModuleNames.Add("Test");
ExtraModuleNames.Add("Temporary");
```
3-2. uproject

프로젝트 의존성과 플러그인 활성화
```cpp
{
    "Name": "Temporary",
    "Enabled": true
}
```
4. 클래스 생성 및 참조
4-1. TemporaryActor 생성

Temporary 플러그인 안에 액터 클래스 생성
```cpp
void ATemporaryActor::BeginPlay()
{
    Super::BeginPlay();
    UKismetSystemLibrary::PrintString(this, TEXT("ATemporaryActor::BeginPlay()"));
}
```
4-2. Character에서 참조
```cpp
void AMPCharacter::BeginPlay()
{
    Super::BeginPlay();
    GetWorld()->SpawnActor(ATestActor::StaticClass());
    GetWorld()->SpawnActor(ATemporaryActor::StaticClass());
}
```

헤더 추가:

#include "TemporaryActor.h"

5. 생성 확인

Plugins 폴더에서 Temporary 플러그인 확인 가능
C++ 클래스는 Content Browser에서 액터 생성 후 사용 가능
게임 실행 시 AMPCharacter가 TestActor와 TemporaryActor를 Spawn

