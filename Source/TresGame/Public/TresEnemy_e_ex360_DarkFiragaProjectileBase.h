#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex360_DarkFiragaProjectileBase.generated.h"

UCLASS()
class ATresEnemy_e_ex360_DarkFiragaProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Hight;
    
    UPROPERTY(EditAnywhere)
    float m_Wide;
    
    UPROPERTY(EditAnywhere)
    int32 m_Count;
    
    UPROPERTY(EditAnywhere)
    float m_ShotPitch;
    
    UPROPERTY(EditAnywhere)
    bool m_IsChildrenFiragaToTarget;
    
    UPROPERTY(EditAnywhere)
    float m_ChildrenFiragaPitchMin;
    
    ATresEnemy_e_ex360_DarkFiragaProjectileBase();
};

