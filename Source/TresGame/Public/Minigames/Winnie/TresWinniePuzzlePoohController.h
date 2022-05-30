#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzlePoohController.generated.h"

class ASkeletalMeshActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzlePoohController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASkeletalMeshActor> HoneypotRef;
    
    UPROPERTY(EditDefaultsOnly)
    FName PoohSocketNameForAttachHoneypot;
    
    UPROPERTY(EditDefaultsOnly)
    int32 IdlePlayTimesToChangeToHungryState;
    
    UPROPERTY(EditDefaultsOnly)
    int32 EatingHoneyPlayTimesToChangeToEatEnd;
    
    UPROPERTY(EditDefaultsOnly)
    float HoneypotMovementRateToChangeToEatHoneyState;
    
private:
    UPROPERTY(Transient)
    ASkeletalMeshActor* m_pHoneypot;
    
public:
    UTresWinniePuzzlePoohController();
};

