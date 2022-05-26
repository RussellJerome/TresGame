#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "TresGumiShipLevelEntityInterface.h"
#include "ETresGumiShipGimmickID.h"
#include "TresGumiShipGimmickActorBase.generated.h"

class UTresEffectAttachComponent;

UCLASS(Abstract)
class ATresGumiShipGimmickActorBase : public ATresGumiShipActorBase, public ITresGumiShipLevelEntityInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresEffectAttachComponent* m_pEffectAttach;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ETresGumiShipGimmickID m_eGimmickID;
    
public:
    ATresGumiShipGimmickActorBase();
    UFUNCTION(BlueprintCallable)
    void FadeOutEffect(float InFadeOutTime, int32 InGroupID);
    
    UFUNCTION(BlueprintCallable)
    void EndEffect(int32 InGroupID);
    
    UFUNCTION(BlueprintCallable)
    void DestroyEffects(int32 InGroupID);
    
    
    // Fix for true pure virtual functions not being implemented
};

