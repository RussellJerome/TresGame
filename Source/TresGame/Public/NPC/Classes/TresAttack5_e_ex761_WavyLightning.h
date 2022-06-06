#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "RaiseCutRootMotionScaleParam_e_ex761.h"
#include "TresAttack5_e_ex761_WavyLightning.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex761_WavyLightning : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_AppearProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_RaiseCutOverrideAttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RaiseCutStartAnimTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableRaiseCutAttach: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RaiseCutAttachTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RaiseCutDefaultRootMotionScale;
    
    UPROPERTY(EditDefaultsOnly)
    FRaiseCutRootMotionScaleParam_e_ex761 m_RaiseCutMinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRaiseCutRootMotionScaleParam_e_ex761 m_RaiseCutMaxRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_FinishOverrideAttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableAppearMotion: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableStartMotion: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_FinishStartRotation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishInitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishHomingSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishHomingSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishHomingEndDistance;
    
public:
    UTresAttack5_e_ex761_WavyLightning();
};

