#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack3_e_ex301_DarkShooting.generated.h"

class ATresProjectileBase;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex301_DarkShooting : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditAnywhere)
    int32 m_ShotBulletCountMax;
    
    UPROPERTY(EditAnywhere)
    float m_ShotBulletIntervalTime;
    
    UPROPERTY(EditAnywhere)
    float m_ShotBulletEndWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_ShotBulletLocVariation;
    
    UPROPERTY(EditAnywhere)
    bool m_DoWarp;
    
    UPROPERTY(EditAnywhere)
    FVector m_WarpPos;
    
    UPROPERTY(EditAnywhere)
    float m_LookOnOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
public:
    UTresAttack3_e_ex301_DarkShooting();
};

