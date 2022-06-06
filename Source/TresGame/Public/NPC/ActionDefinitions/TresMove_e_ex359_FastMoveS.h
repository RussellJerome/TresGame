#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamOnRateInfo.h"
#include "TresActionDefinitionBase.h"
#include "EEX359_SplineMoveVelocityType.h"
#include "EX359_BeamInfoSet.h"
#include "TresMove_e_ex359_FastMoveS.generated.h"

UCLASS(HideDropdown)
class UTresMove_e_ex359_FastMoveS : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fWarpDisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX359_SplineMoveVelocityType> m_VelocityType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocityExp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWaveWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTangentSize;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bReverse;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_BeamInfoSet m_BeamInfoSet;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX359_BeamOnRateInfo> m_BeamOnRateInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDsip;
    
    UTresMove_e_ex359_FastMoveS();
};

