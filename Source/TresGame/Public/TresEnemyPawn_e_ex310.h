#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIDPawnBase.h"
#include "ETresBodyCollReactionType.h"
#include "TresEnemyPawn_e_ex310.generated.h"

class ATresWeaponBase;

UCLASS()
class ATresEnemyPawn_e_ex310 : public ATresEnemyXIIIDPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyReactionTypeWhileStun;
    
protected:
    UPROPERTY()
    ATresWeaponBase* m_pWeaponKeyBlade;
    
    UPROPERTY()
    ATresWeaponBase* m_pWeaponClaymore;
    
public:
    ATresEnemyPawn_e_ex310();
};

