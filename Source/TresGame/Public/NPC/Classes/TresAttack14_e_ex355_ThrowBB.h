#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "DeviationShotInfo_e_ex355.h"
#include "UObject/NoExportTypes.h"
#include "EX355_ThrowBB_Pattern.h"
#include "TresAttack14_e_ex355_ThrowBB.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack14_e_ex355_ThrowBB : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ProjectileSpawnBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vProjectileSpawnOffset;
    
    UPROPERTY(EditAnywhere)
    bool m_bAimTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAimTargetMaxYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAimTargetMinPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAimTargetMaxPitch;
    
    UPROPERTY(EditAnywhere)
    FDeviationShotInfo_e_ex355 m_DeviationShotInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_ProjectileRot;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iValidThrowPattern;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileSub;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_ThrowBB_Pattern> m_ThrowPatternArray;
    
    UTresAttack14_e_ex355_ThrowBB();
};

