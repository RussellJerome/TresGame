#pragma once
#include "CoreMinimal.h"
#include "EKunaiType.h"
#include "Kunai_Details.generated.h"

USTRUCT(BlueprintType)
struct FKunai_Details {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EKunaiType> m_KunaiType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Timing;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Angle;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_Velocity;
    
    TRESGAME_API FKunai_Details();
};

