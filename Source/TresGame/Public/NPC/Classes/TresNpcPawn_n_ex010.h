#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_ex010.generated.h"

class ATresAccompanyPawnBase;

UCLASS()
class ATresNpcPawn_n_ex010 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FRThinkOfYouBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FriendPointAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FriendPointMul;
    
    ATresNpcPawn_n_ex010();
};

