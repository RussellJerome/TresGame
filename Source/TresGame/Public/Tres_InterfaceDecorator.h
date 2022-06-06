#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Tres_InterfaceDecorator.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTres_InterfaceDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> m_pActor;
    
    UPROPERTY(BlueprintReadWrite)
    float m_valueA;
    
    UPROPERTY(BlueprintReadWrite)
    float m_valueB;
    
    TRESGAME_API FTres_InterfaceDecorator();
};

