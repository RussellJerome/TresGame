#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickCannon.generated.h"

class UTresBodyCollPrimitive;
class UArrowComponent;
class UTresLockonTargetComponent;
class ATresProjectileBase;

UCLASS(Config=Game)
class ATresGimmickCannon : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresBodyCollPrimitive* m_pBodyCollPrimitive;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UArrowComponent* m_pArrowComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresLockonTargetComponent* m_pLockonTargetComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(Transient)
    bool m_bBellShot;
    
    UPROPERTY(Transient)
    FName m_PreAnimationName;
    
public:
    ATresGimmickCannon();
};

