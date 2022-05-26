#pragma once
#include "CoreMinimal.h"
#include "TresEnemyState_Appear.h"
#include "TresEnemyState_e_ex053_Appear.generated.h"

UCLASS()
class UTresEnemyState_e_ex053_Appear : public UTresEnemyState_Appear {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_PreAppearAnimText;
    
    UPROPERTY(EditAnywhere)
    FName m_PreAppearLoopAnimText;
    
    UPROPERTY(EditAnywhere)
    FName m_AppearAnimText;
    
    UPROPERTY(EditAnywhere)
    float m_WaitTimer;
    
public:
    UTresEnemyState_e_ex053_Appear();
};

