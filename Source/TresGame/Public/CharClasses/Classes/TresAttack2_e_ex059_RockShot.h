#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "RockShotProjInfo_e_ex059.h"
#include "TresAttack2_e_ex059_RockShot.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex059_RockShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fRollStartYawOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vRotAxisOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vMaskRotAxisOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinRootHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxRootHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MuzzleEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_MuzzleEffectCmp;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fShotMarginAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FRockShotProjInfo_e_ex059 m_ProjInfo_0;
    
    UPROPERTY(EditDefaultsOnly)
    FRockShotProjInfo_e_ex059 m_ProjInfo_1;
    
    UPROPERTY()
    bool m_bUseProjInfo1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxShotYawOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDisp;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bSkipInternalTickCheck;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bValidateDebugDisp;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fLineTraceLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fValidateRollStartYawOffset;
    
    UTresAttack2_e_ex059_RockShot();
};

