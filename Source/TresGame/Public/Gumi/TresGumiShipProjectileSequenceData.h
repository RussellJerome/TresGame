#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipProjectileSequenceData.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipProjectileSequenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fExecuteSec;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fHomingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fTargetDotCheckRotation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bTargetLocationPredictable;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bTargetDotCheckable;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bReleaseAttach;
    
    TRESGAME_API FTresGumiShipProjectileSequenceData();
};

