#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "ETresStateID.h"
#include "TresStateQueueComponent.generated.h"

class UTresStateSet;
class UTresStateBase;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresStateQueueComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UTresStateSet* MyStateAsset;
    
    UPROPERTY(EditDefaultsOnly)
    bool MyDisableAutoMainProc;
    
    UPROPERTY(EditDefaultsOnly)
    bool MyIsSetDefaultState;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresStateID> MySetDefaultState;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_CinematicStateClass;
    
    UPROPERTY(Transient)
    UTresStateBase* m_pCurrentState;
    
    UPROPERTY(Transient)
    TArray<UTresStateBase*> m_StateQueue;
    
    UPROPERTY(Transient)
    TArray<UTresStateBase*> m_RecycleState;
    
public:
    UTresStateQueueComponent();
};

