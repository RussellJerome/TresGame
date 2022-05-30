#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIILE_Base.h"
#include "UObject/NoExportTypes.h"
#include "TresDarkLaserSpawnParams_e_ex352.h"
#include "TresAttack3_e_ex352_RotationDarkLaser.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex352_RotationDarkLaser : public UTresAttack_XIIILE_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FVector m_TargetAttachOffset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinSpawnRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpawnRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinSpawnHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpawnHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnPitch;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_SpawnAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FTresDarkLaserSpawnParams_e_ex352 m_DarkLaserSpawnParam;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_LaserMoveAngles;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserMoveRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DegreeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxShotAngle;
    
public:
    UTresAttack3_e_ex352_RotationDarkLaser();
};

