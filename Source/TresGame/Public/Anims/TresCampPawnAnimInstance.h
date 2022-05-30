#pragma once
#include "CoreMinimal.h"
#include "TresCharAnimInstance.h"
#include "ETresCampPawnAnimTypeID.h"
#include "TresCampPawnAnimInstance.generated.h"

class ATresCampPawnBase;

UCLASS(NonTransient)
class UTresCampPawnAnimInstance : public UTresCharAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TEnumAsByte<ETresCampPawnAnimTypeID> m_AnimType;
    
public:
    UTresCampPawnAnimInstance();
    UFUNCTION(BlueprintPure)
    ATresCampPawnBase* TryGetTresCampPawnOwner();
    
};

