#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex105_ChaosShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex105_ChaosShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_ChaosShotCnt;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ChaosShotFireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeInitRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeTgtRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeTgtRotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeTgtStDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeTgtEndDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeTgtMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeLockOnOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExplosionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube1RotSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube1RotSpeedRoll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube2RotSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube2RotSpeedRoll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube3RotSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Cube3RotSpeedRoll;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeAtkColStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeAtkColorStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeZHomingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeZHomingRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OwnerTurnSpeed;
    
public:
    UTresAttack2_e_ex105_ChaosShot();
};

