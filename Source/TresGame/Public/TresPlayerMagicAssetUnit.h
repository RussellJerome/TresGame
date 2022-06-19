#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresCommandKind.h"
#include "TresPlayerMagicAssetUnit.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresPlayerMagicAssetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> m_Command;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bIsCastType: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bIsTurnType: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bIsDirectPos: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_EffectGroup;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_VoiceGroup;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_VoiceGroupFinish;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_AssetData00;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_AssetData01;
    
    TRESGAME_API FTresPlayerMagicAssetUnit();
};

