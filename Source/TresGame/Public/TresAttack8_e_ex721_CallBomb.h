#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack8_e_ex721_CallBomb.generated.h"

UCLASS(HideDropdown)
class UTresAttack8_e_ex721_CallBomb : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileFallRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileFallOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileBoundHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileBoundSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileShutDownHeight;
    
public:
    UTresAttack8_e_ex721_CallBomb();
};

