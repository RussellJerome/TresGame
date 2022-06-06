#pragma once
#include "CoreMinimal.h"
#include "ETresForwardDirection.h"
#include "TresProjectileBase.h"
#include "TresProj_LaserTemplate.generated.h"

UCLASS()
class ATresProj_LaserTemplate : public ATresProjectileBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresOnShutDown);
    
private:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresForwardDirection> m_eEffectForward;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fScaleTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIgnoreBodyCollision;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bLifeOverIfTakeDamage;
    
public:
    ATresProj_LaserTemplate();
};

