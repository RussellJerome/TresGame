#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EX359_BeamInfoSet.h"
#include "EX359_BeamOnCircleInfo.h"
#include "TresMove_e_ex359_FastMoveCircle.generated.h"

UCLASS(HideDropdown)
class UTresMove_e_ex359_FastMoveCircle : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fWarpDisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxYawVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxRadiusVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRadiusExp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCircleRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxCircleYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawBrake;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bRotateReverse;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_BeamInfoSet m_BeamInfoSet;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX359_BeamOnCircleInfo> m_BeamOnCircleInfoArray;
    
    UTresMove_e_ex359_FastMoveCircle();
};

