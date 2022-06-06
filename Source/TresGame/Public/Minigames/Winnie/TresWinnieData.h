#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresWinnieData.generated.h"

class UDataTable;

UCLASS()
class UTresWinnieData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PlayerAnimationDataRef;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CharacterAnimationDataRef;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* SoundEffectDataRef;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* VoiceDataRef;
    
public:
    UTresWinnieData();
};

