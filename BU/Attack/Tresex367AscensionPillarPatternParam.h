#pragma once
#include "CoreMinimal.h"
#include "Tresex367AscensionPillarPatternParam.generated.h"

USTRUCT(BlueprintType)
struct FTresex367AscensionPillarPatternParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_IsShotRotationToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ShotRotation;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsShotLocationTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetRenge;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetRot;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsCalcOffsetRotation;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BulletID;
    
    TRESGAME_API FTresex367AscensionPillarPatternParam();
};
