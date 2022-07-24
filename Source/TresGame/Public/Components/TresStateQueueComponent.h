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
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    UTresStateSet* MyStateAsset;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool MyDisableAutoMainProc;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    bool MyIsSetDefaultState;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    TEnumAsByte<ETresStateID> MySetDefaultState;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly, BlueprintReadWrite)
    TSubclassOf<UTresStateBase> m_CinematicStateClass;
    
    UPROPERTY(Transient, BlueprintReadWrite)
    UTresStateBase* m_pCurrentState;
    
    UPROPERTY(Transient, BlueprintReadWrite)
    TArray<UTresStateBase*> m_StateQueue;
    
    UPROPERTY(Transient, BlueprintReadWrite)
    TArray<UTresStateBase*> m_RecycleState;
    
public:
    UTresStateQueueComponent();
};

