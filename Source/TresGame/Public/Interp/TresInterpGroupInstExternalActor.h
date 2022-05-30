#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroupInst.h"
#include "TresInterpGroupInstExternalActor.generated.h"

class AActor;

UCLASS()
class TRESGAME_API UTresInterpGroupInstExternalActor : public UInterpGroupInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_Actor;
    
    UTresInterpGroupInstExternalActor();
};

