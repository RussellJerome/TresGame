#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresRangeCheckMode.h"
#include "ETresRangeCheckValueSource.h"
#include "ETresRangeCheckValueSetting.h"
#include "TresBTDecorator_RangeCheck.generated.h"

UCLASS()
class UTresBTDecorator_RangeCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Source;
    
    UPROPERTY(EditAnywhere)
    bool UseDistanceFromSourceBounds;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Target;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresRangeCheckMode::Type> RangeMode;
    
    UPROPERTY(EditAnywhere)
    bool UseDistanceToTargetBounds;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresRangeCheckValueSetting::Type> m_RangeValueSetting;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresRangeCheckValueSource::Type> m_MinRangeValueType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresRangeCheckValueSource::Type> m_MaxRangeValueType;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseMinRange: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseMaxRange: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseBlackboardMinRange: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseBlackboardMaxRange: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseLiteralMinRange: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    uint8 m_bUseLiteralMaxRange: 1;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyMinRange;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_BlackboardKeyMaxRange;
    
    UPROPERTY(EditAnywhere)
    float MinRange;
    
    UPROPERTY(EditAnywhere)
    float MaxRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseOverrideKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_OverrideKey;
    
    UTresBTDecorator_RangeCheck();
};

