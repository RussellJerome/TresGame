#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MognetMedalPrizeWork.h"
#include "TresItemMognetMedal.generated.h"

class USceneComponent;
class UParticleSystemComponent;
class ATresCharPawnBase;

UCLASS(Abstract, HideDropdown, NotPlaceable)
class ATresItemMognetMedal : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MyParticle;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FMognetMedalPrizeWork> m_Drops;
    
    UPROPERTY(DuplicateTransient, Transient)
    ATresCharPawnBase* m_pAttachPawn;
    
public:
    ATresItemMognetMedal();
};

