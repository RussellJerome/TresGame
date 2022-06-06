#pragma once
#include "CoreMinimal.h"
#include "TresNpcPawnBase.h"
#include "Engine/EngineTypes.h"
#include "TresNpcPawn_n_ex033.generated.h"

class AController;
class AActor;

UCLASS()
class ATresNpcPawn_n_ex033 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FriendPointAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FriendPointMul;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_AppendCure;
    
    UPROPERTY(EditAnywhere)
    float m_AttackTime;
    
public:
    ATresNpcPawn_n_ex033();
protected:
    UFUNCTION()
    void OnDamageForRoxas(float InDamageAmount, const FDamageEvent& InDamageEvent, AController* InEventInstigator, AActor* InDamageCauser);
    
};

