#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex352_ChaosFiragaBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack13_e_ex352_CloudChaosFiraga.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresAttack13_e_ex352_CloudChaosFiraga : public UTresAttack_e_ex352_ChaosFiragaBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_DarkMatterMoveSpeedCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterVerticalAlignmentTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterVerticalAlignmentMoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterStoppingDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_2ndDarkMatterDownStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterPositionCorrection;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LookAheadTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterMaxHomingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_DarkMatterOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_DarkMatterFireAngle;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FRotator m_MaxRotationCorrectionSpeed;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_DarkMatterHoming;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterLookAheadTime;
    
public:
    UTresAttack13_e_ex352_CloudChaosFiraga();
};

