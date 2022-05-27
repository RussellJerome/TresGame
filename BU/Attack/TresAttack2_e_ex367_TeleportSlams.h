#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack2_e_ex367_TeleportSlams.generated.h"

class ATresProjectileBase;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex367_TeleportSlams : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_High;
    
    UPROPERTY(EditAnywhere)
    float m_WarpTime;
    
    UPROPERTY(EditAnywhere)
    float m_WarpRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bAdsorptionParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditAnywhere)
    FVector m_SwordWaveOffset;
    
    UPROPERTY(EditAnywhere)
    int32 m_SlashEffectGroupID;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsFinishMode;
    
public:
    UTresAttack2_e_ex367_TeleportSlams();
};

