#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack1_e_he904_MagmaSplash.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack1_e_he904_MagmaSplash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxShotCount;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_fShotRandomRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ShotBoneName_L;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ShotBoneName_R;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinProjectileDiameter;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxProjectileDiameter;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vMountainCenter;
    
    UPROPERTY(EditDefaultsOnly)
    float m_vMountainRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_vMountainHeight;
    
    UTresAttack1_e_he904_MagmaSplash();
};

