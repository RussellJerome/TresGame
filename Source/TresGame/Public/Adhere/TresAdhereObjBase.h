#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresDamageInfo.h"
#include "TresAdhereObjBase.generated.h"

class UTresRootComponent;
class ATresCharPawnBase;
class UTresChrBaseParam;
class UTresChrDataTableSet;

UCLASS(Abstract, HideDropdown, NotPlaceable)
class ATresAdhereObjBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
protected:
    UPROPERTY(DuplicateTransient, Transient)
    ATresCharPawnBase* m_pAttachPawn;
    
    UPROPERTY(DuplicateTransient, Transient)
    AActor* m_pCauserActor;
    
    UPROPERTY(DuplicateTransient, Transient)
    AActor* m_pCauserOwner;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresChrBaseParam* m_pCauserBaseParam;
    
    UPROPERTY(DuplicateTransient, Transient)
    UTresChrDataTableSet* m_pCauserDataTableSet;
    
    UPROPERTY(DuplicateTransient, Transient)
    FTresDamageInfo m_CauserDamageInfo;
    
public:
    ATresAdhereObjBase();
};

