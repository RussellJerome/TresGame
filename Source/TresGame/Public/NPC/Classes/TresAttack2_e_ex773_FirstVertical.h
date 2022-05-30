#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresParamProjectileComboHit.h"
#include "TresAttack2_e_ex773_FirstVertical.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex773_FirstVertical : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxMoveSpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveSpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtDist;
    
    UPROPERTY(EditDefaultsOnly)
    FVector TargetLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FTresParamProjectileComboHit ComboParam;
    
public:
    UTresAttack2_e_ex773_FirstVertical();
};

