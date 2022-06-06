#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkPawnBase.h"
#include "TresFriendLinkPawnGoofyShoot.generated.h"

class AActor;

UCLASS()
class ATresFriendLinkPawnGoofyShoot : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_ThrowPitch;
    
private:
    UPROPERTY()
    AActor* m_pDummyTarget;
    
public:
    ATresFriendLinkPawnGoofyShoot();
};

