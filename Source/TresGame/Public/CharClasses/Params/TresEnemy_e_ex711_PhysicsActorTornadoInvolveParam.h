#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex711_PhysicsActorTornadoInvolveParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex711_PhysicsActorTornadoInvolveParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_InitMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AddMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxMoveSpeed;
    
    TRESGAME_API FTresEnemy_e_ex711_PhysicsActorTornadoInvolveParam();
};

