#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresStateID.h"
#include "TresActionDefinitionBase.generated.h"

class AActor;
class USceneComponent;

UCLASS(Abstract, NotPlaceable)
class UTresActionDefinitionBase : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FVector m_Destination;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Export)
    TWeakObjectPtr<USceneComponent> m_LockonTarget;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<TEnumAsByte<ETresStateID>> m_ViableStates;
    
private:
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bActionAbortPermission: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    int32 m_SubStep;
    
public:
    UTresActionDefinitionBase();
};

