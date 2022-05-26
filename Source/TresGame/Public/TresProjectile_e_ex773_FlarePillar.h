#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex773_FlarePillar.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex773_FlarePillar : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_ChangeColorTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChangeColorCompTime;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_ChangeColor;
    
    ATresProjectile_e_ex773_FlarePillar();
};

