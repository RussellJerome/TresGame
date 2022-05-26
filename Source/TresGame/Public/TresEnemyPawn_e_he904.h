#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase_e_he90y.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_he904.generated.h"

class ATresHitActor_e_he90x;

UCLASS()
class ATresEnemyPawn_e_he904 : public ATresEnemyPawnBase_e_he90y {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_IceActorBBKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TornadoActorBBKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresHitActor_e_he90x> m_MountCollActorClass;
    
    UPROPERTY()
    ATresHitActor_e_he90x* m_MountCollActor;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresHitActor_e_he90x> m_MountCollActorClass_FR;
    
    UPROPERTY()
    ATresHitActor_e_he90x* m_MountCollActor_FR;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vMountCollLoc;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iSolidMaterialParamNo;
    
    ATresEnemyPawn_e_he904();
    UFUNCTION()
    void DebugSwapMountCollEnabled();
    
};

