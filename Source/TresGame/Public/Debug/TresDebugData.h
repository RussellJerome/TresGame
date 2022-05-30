#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresDebugData.generated.h"

class UPackage;

UCLASS()
class UTresDebugData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UPackage*> m_UPackage;
    
    UPROPERTY(Transient)
    TArray<UObject*> m_UObject;
    
    UTresDebugData();
};

