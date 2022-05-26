#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EX355_SwingTractionVerticalInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresAttackDefinitionMelee.h"
#include "EX355_SwingTractionInfo.h"
#include "WaveSet_e_ex359.h"
#include "EX355_SwingWeaponGroundHitEffectInfo.h"
#include "EX355_SwingThrowDirection.h"
#include "TresAttack3_e_ex355_Swing.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex355_Swing : public UTresAttackDefinitionMelee {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_vJumpDestinationTargetOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHorizontalJumpVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVerticalJumpVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxJumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinJumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fJumpBrakeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVerticalJumpFinalVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_SwingTractionInfo> m_TractionInfoArray;
    
    UPROPERTY()
    bool m_bTractionHorizontal;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDispHorizontal;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_SwingTractionVerticalInfo> m_TractionVerticalInfoArray;
    
    UPROPERTY()
    bool m_bTractionVertical;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDispVertical;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveSet_e_ex359 m_WaveSet;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ProjectileSpawnBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FEX355_SwingThrowDirection m_ThrowDirectionLand;
    
    UPROPERTY(EditDefaultsOnly)
    FEX355_SwingThrowDirection m_ThrowDirectionAir;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThrowDirectionHeightFromLand;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_SwingWeaponGroundHitEffectInfo> m_WeaponGroundHitEffectInfoArray;
    
    UTresAttack3_e_ex355_Swing();
};

