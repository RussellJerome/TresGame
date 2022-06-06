#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresFriendLinkPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresFriendLinkPawnBlizzagaBoard.generated.h"

class ATresProjectileBase;

UCLASS()
class ATresFriendLinkPawnBlizzagaBoard : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_TackleSpeedFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_TackleSpeedAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_TackleSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_TackleHomingPower;
    
    ATresFriendLinkPawnBlizzagaBoard();
    UFUNCTION(BlueprintPure)
    FRotator BP_GetRotationToBlizzagaBoardTarget() const;
    
};

