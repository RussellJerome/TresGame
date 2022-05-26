#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikFpsCorrectionDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikFpsCorrectionDesc {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_FrameRate;
    
    UPROPERTY(EditAnywhere)
    float m_WindDrag;
    
    UPROPERTY(EditAnywhere)
    float m_WindLift;
    
    UPROPERTY(EditAnywhere)
    float m_LocalForceDrag;
    
    UPROPERTY(EditAnywhere)
    float m_LocalForceLift;
    
    UPROPERTY(EditAnywhere)
    float m_Damping;
    
    UPROPERTY(EditAnywhere)
    float m_Mass;
    
    UPROPERTY(EditAnywhere)
    float m_Friction;
    
    UPROPERTY(EditAnywhere)
    float m_Bounce;
    
    UPROPERTY(EditAnywhere)
    float m_LateralLink;
    
    UPROPERTY(EditAnywhere)
    float m_BendingLink;
    
    UPROPERTY(EditAnywhere)
    float m_LongRangeAttachment;
    
    UPROPERTY(EditAnywhere)
    float m_Cone;
    
    BONAMIKRT_API FSQEX_BonamikFpsCorrectionDesc();
};

