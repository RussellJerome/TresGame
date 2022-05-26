#pragma once
#include "CoreMinimal.h"
#include "TresAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipAnimInstance.generated.h"

UCLASS(NonTransient)
class UTresGumiShipAnimInstance : public UTresAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    float m_fLockAtAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    FVector m_vLookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    FVector m_vTargetLocation;
    
public:
    UTresGumiShipAnimInstance();
};

