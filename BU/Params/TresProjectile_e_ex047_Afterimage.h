#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex047_Afterimage.generated.h"

class UTresLockonTargetComponent;

UCLASS()
class ATresProjectile_e_ex047_Afterimage : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresLockonTargetComponent* m_MyLockonComponent;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DestroyLookOn;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AuraStartValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AuraEndValue;
    
    ATresProjectile_e_ex047_Afterimage();
};

