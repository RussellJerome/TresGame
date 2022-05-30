#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIILE_Base.h"
#include "UObject/NoExportTypes.h"
#include "TresDarkLaserSpawnParams_e_ex352.h"
#include "TresAttack4_e_ex352_ScatteringDarkLaser.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_ex352_ScatteringDarkLaser : public UTresAttack_XIIILE_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumberOfSpawns;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartMovingDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MovementSpeedCorrection;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxMovementSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_XSpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_YSpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_SpawnOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    int32 m_NumXLightBulb;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    int32 m_NumYLightBulb;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    int32 m_NumZLightBulb;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_LightBulbRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FTresDarkLaserSpawnParams_e_ex352 m_DarkLaserSpawnParam;
    
public:
    UTresAttack4_e_ex352_ScatteringDarkLaser();
};

