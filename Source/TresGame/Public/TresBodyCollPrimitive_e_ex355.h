#pragma once
#include "CoreMinimal.h"
#include "TresBodyCollPrimitive.h"
#include "ETresBodyCollReactionType.h"
#include "TresBodyCollPrimitive_e_ex355.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresBodyCollPrimitive_e_ex355 : public UTresBodyCollPrimitive {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyReactionType_BB;
    
public:
    UTresBodyCollPrimitive_e_ex355();
    UFUNCTION(BlueprintCallable)
    ETresBodyCollReactionType GetDefaultBodyReactionType();
    
    UFUNCTION(BlueprintCallable)
    ETresBodyCollReactionType GetBodyReactionType_Normal();
    
    UFUNCTION(BlueprintCallable)
    ETresBodyCollReactionType GetBodyReactionType_BB();
    
};

