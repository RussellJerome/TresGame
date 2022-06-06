#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILPawnBase.h"
#include "TresEnemyPawn_e_ex363.generated.h"

class ATresPawnBase;
class ATresEnemyPawn_e_ex363_DarkRush;
class ATresEnemyPawn_e_ex363_RiseRushDurkEffect;
class ATresCharPawnBase;

UCLASS()
class ATresEnemyPawn_e_ex363 : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_OpacityFadeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPawnBase> m_DarkRushObjectClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPawnBase> m_RiseRushEffectObjectClass;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex363_DarkRush* m_DarkRushObject;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex363_RiseRushDurkEffect* m_RiseRushEffectObject;
    
    UPROPERTY()
    ATresCharPawnBase* m_BuddyPawn;
    
public:
    ATresEnemyPawn_e_ex363();
};

