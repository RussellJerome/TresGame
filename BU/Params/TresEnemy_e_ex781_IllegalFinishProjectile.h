#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex781_IllegalFinishProjectile.generated.h"

class ATresCharPawnBase;

UCLASS()
class ATresEnemy_e_ex781_IllegalFinishProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseTime;
    
private:
    UPROPERTY()
    ATresCharPawnBase* m_Target;
    
public:
    ATresEnemy_e_ex781_IllegalFinishProjectile();
};

