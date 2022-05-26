#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "WaterActionTypes_e_ex047.h"
#include "TresAttack5_e_ex047_AfterimageWater.generated.h"

class ATresProjectileBase;
class ATresProjectile_e_ex047_Afterimage;
class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex047_AfterimageWater : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex047_Afterimage> m_FrontAfterimageProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_AttackProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<WaterActionTypes_e_ex047> m_WaterActionType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fThrowAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlideSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationSpeed;
    
    UTresAttack5_e_ex047_AfterimageWater();
};

