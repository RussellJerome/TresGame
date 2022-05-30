#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_ControlType.h"
#include "TresInterpTrackBonamikControlKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackBonamikControlKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    bool m_Reset;
    
    UPROPERTY(EditAnywhere)
    bool m_ResetPose;
    
    UPROPERTY(EditAnywhere)
    bool m_ReinitializeSimulationPose;
    
    UPROPERTY(EditAnywhere)
    bool m_RestoreDefaultParams;
    
    UPROPERTY(EditAnywhere)
    int32 m_PreRoll;
    
    UPROPERTY(EditAnywhere)
    int32 m_PreRollForAttachment;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> m_Groups;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_ControlType> m_SimulationOnOff;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_ControlType> m_GroundOnOff;
    
    UPROPERTY(EditAnywhere)
    bool m_ChangeInnerCone;
    
    UPROPERTY(EditAnywhere)
    float m_InnerConeScale;
    
    UPROPERTY(EditAnywhere)
    bool m_ChangeOuterCone;
    
    UPROPERTY(EditAnywhere)
    float m_OuterConeScale;
    
    UPROPERTY(EditAnywhere)
    bool m_ChangeLocalForce;
    
    UPROPERTY(EditAnywhere)
    float m_LocalForceScale;
    
    UPROPERTY(EditAnywhere)
    bool m_ChangeWindScale;
    
    UPROPERTY(EditAnywhere)
    float m_GroupWindScale;
    
    UPROPERTY(EditAnywhere)
    bool m_ChangeHighFPSEvaluation;
    
    UPROPERTY(EditAnywhere)
    bool m_EnableHighFPSEvaluation;
    
    TRESGAME_API FTresInterpTrackBonamikControlKey();
};

