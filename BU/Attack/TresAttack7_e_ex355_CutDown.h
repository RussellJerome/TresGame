#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "EX355_CutDownClaymoreInfo.h"
#include "WaveOneCollInfo_e_ex359.h"
#include "UObject/NoExportTypes.h"
#include "EX355_CutDownTractionInfo.h"
#include "EEX355_CutDownClaymoreGoalBase.h"
#include "TresAttack7_e_ex355_CutDown.generated.h"

class UParticleSystem;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack7_e_ex355_CutDown : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fFallVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveOneCollInfo_e_ex359 m_CenterColl;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_CenterCollOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GroundHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_GroundHitEffectOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_CutDownClaymoreInfo> m_ClaymoreInfo;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX355_CutDownClaymoreGoalBase> m_ClaymoreThrowGoalBase;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fClaymoreThrowGoalLocDeviation;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bHitWaveOnce;
    
    UPROPERTY(EditAnywhere)
    FVector m_vWarpOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_CutDownTractionInfo> m_TractionInfoArray;
    
protected:
    UPROPERTY()
    TArray<ATresProjectileBase*> m_ProjectileArray;
    
public:
    UTresAttack7_e_ex355_CutDown();
};

