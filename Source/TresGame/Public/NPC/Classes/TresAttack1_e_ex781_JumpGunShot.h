#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex781_JumpGunShot.generated.h"

class UCurveFloat;
class ATresProjectileBase;
class USoundBase;

UCLASS()
class UTresAttack1_e_ex781_JumpGunShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_JumpScaleCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpHight;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_HitVoiceID;
    
    UTresAttack1_e_ex781_JumpGunShot();
};

