#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresShotParam_e_ex701_DarkCloud.h"
#include "TresAttack1_e_ex701_DarkCloud.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex701_DarkCloud : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresShotParam_e_ex701_DarkCloud> m_ShotParams;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpawnRangeTime;
    
public:
    UTresAttack1_e_ex701_DarkCloud();
};

