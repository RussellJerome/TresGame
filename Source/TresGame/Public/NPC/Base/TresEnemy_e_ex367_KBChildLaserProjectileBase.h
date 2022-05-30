#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemy_e_ex367_KBChildLaserProjectileBase.generated.h"

UCLASS()
class ATresEnemy_e_ex367_KBChildLaserProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_RotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_HitBulletData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HitBulletTime;
    
    ATresEnemy_e_ex367_KBChildLaserProjectileBase();
};

