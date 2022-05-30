#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresFriendLinkPawnPromiseWings.generated.h"

UCLASS()
class ATresFriendLinkPawnPromiseWings : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_TackleSpeedFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_TackleSpeedAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_TackleSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_TackleHomingPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FinishSlowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FinishSlowTime;
    
    ATresFriendLinkPawnPromiseWings();
    UFUNCTION(BlueprintPure)
    FRotator BP_GetRotationToPromiseWingsTarget() const;
    
};

