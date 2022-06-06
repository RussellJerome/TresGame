#pragma once
#include "CoreMinimal.h"
#include "TresHopActor.h"
#include "UObject/NoExportTypes.h"
#include "TresHopActorEw.generated.h"

UCLASS()
class ATresHopActorEw : public ATresHopActor {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FVector MyInverseUpVectorDir;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float PermissionAngle;
    
    ATresHopActorEw();
};

