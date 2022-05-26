#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresUICommandInfoBase.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class UTresUICommandInfoBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    AActor* m_Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient)
    UPrimitiveComponent* m_Component;
    
    UTresUICommandInfoBase();
};

