#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex311_DarkFiragaProjectileBase.generated.h"

UCLASS()
class ATresEnemy_e_ex311_DarkFiragaProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Hight;
    
    UPROPERTY(EditAnywhere)
    float m_Wide;
    
    UPROPERTY(EditAnywhere)
    int32 m_Count;
    
    ATresEnemy_e_ex311_DarkFiragaProjectileBase();
};

