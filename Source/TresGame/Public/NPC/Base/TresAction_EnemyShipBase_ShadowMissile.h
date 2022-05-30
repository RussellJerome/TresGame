#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAction_EnemyShipBase_ShadowMissile.generated.h"

UCLASS(HideDropdown)
class UTresAction_EnemyShipBase_ShadowMissile : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FVector m_HomingTargetOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinProjPitch;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_MinPitchRange;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_SocketNameRight;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_SocketNameLeft;
    
public:
    UTresAction_EnemyShipBase_ShadowMissile();
};

