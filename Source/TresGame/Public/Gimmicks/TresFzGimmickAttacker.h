#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresActorInterface.h"
#include "TresFzGimmickAttacker.generated.h"

class UTresChrBaseParam;
class UTresChrDataTableSet;

UCLASS()
class ATresFzGimmickAttacker : public AActor, public ITresActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(DuplicateTransient, Transient)
    UTresChrDataTableSet* m_pDataTableSet;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresChrBaseParam* m_pBaseParam;
    
public:
    ATresFzGimmickAttacker();
    
    // Fix for true pure virtual functions not being implemented
};

