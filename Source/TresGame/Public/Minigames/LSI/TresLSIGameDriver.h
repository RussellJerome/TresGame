#pragma once
#include "CoreMinimal.h"
#include "TresLSIGameDriver.generated.h"

class AActor;
class UTresGameInstance;
class APlayerController;
class AGameMode;
class APostProcessVolume;
class ATresLSIGameActor;
class ACameraActor;
class UPlayerInput;

USTRUCT(BlueprintType)
struct FTresLSIGameDriver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresGameInstance* m_GameInstance;
    
    UPROPERTY(Transient)
    AGameMode* m_LSIGameMode;
    
    UPROPERTY(Transient)
    ATresLSIGameActor* m_LSIGameActor;
    
    UPROPERTY(Transient)
    ACameraActor* m_LSIGameCamera;
    
    UPROPERTY(Transient)
    UPlayerInput* m_LSIGamePlayerInput;
    
    UPROPERTY(Transient)
    APostProcessVolume* m_LSIPostprocess;
    
    UPROPERTY(Transient)
    APlayerController* m_OriginalPC;
    
    UPROPERTY(Transient)
    AActor* m_OriginalViewTarget;
    
    UPROPERTY(Transient)
    TArray<AActor*> m_OriginalHiddenActors;
    
public:
    TRESGAME_API FTresLSIGameDriver();
};

