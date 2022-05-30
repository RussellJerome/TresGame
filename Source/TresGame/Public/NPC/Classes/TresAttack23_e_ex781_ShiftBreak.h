#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack23_e_ex781_ShiftBreak.generated.h"

class ATresProjectileBase;
class ATresEnemy_e_ex781_SwordProjectile;

UCLASS()
class UTresAttack23_e_ex781_ShiftBreak : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MotionName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PlayRate;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_RootScale;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_EffectId;
    
private:
    UPROPERTY()
    ATresEnemy_e_ex781_SwordProjectile* m_BladeProjectile;
    
public:
    UTresAttack23_e_ex781_ShiftBreak();
};

