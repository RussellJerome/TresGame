#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresE_EX367_DarkShootingPatternParam.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack3_e_ex367_DarkShooting.generated.h"

class ATresProjectileBase;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex367_DarkShooting : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_EX367_DarkShootingPatternParam> m_ShotPatternParam;
    
    UPROPERTY(EditAnywhere)
    float m_ShotBulletEndWaitTime;
    
    UPROPERTY(EditAnywhere)
    FVector m_ShotBulletLocOffset;
    
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
    UTresAttack3_e_ex367_DarkShooting();
};

