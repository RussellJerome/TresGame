#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ETresRiskDodgeType.h"
#include "TresAnimNotify_DamageCaution.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_DamageCaution : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresRiskDodgeType> DodgeType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EntryTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_LimitAngle;
    
public:
    UTresAnimNotify_DamageCaution();
};

