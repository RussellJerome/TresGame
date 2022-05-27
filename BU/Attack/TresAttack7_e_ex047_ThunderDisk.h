#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack7_e_ex047_ThunderDisk.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack7_e_ex047_ThunderDisk : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_AttackProjectile;
    
    UPROPERTY(EditAnywhere)
    float m_TargetDistance;
    
    UPROPERTY(EditAnywhere)
    float m_CreateVariationDegree;
    
    UPROPERTY(EditAnywhere)
    float m_VariationDegree;
    
    UPROPERTY(EditAnywhere)
    float m_shotInterval;
    
    UPROPERTY(EditAnywhere)
    float m_Accel;
    
    UPROPERTY(EditAnywhere)
    float m_InitSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_ForwardOffset;
    
    UPROPERTY(EditAnywhere)
    float m_ShotOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float m_ShotDirOffsetZ;
    
    UTresAttack7_e_ex047_ThunderDisk();
};

