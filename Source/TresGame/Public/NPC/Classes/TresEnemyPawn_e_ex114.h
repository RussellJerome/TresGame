#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex114.generated.h"

class UTresAttack4_e_ex114_Bunshin;

UCLASS()
class ATresEnemyPawn_e_ex114 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAttack4_e_ex114_Bunshin> m_BunshinActionBase;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevengeHp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RevengeProbability;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NextRevengeTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_RevengeAllowLastPawnNum;
    
    ATresEnemyPawn_e_ex114();
    UFUNCTION(BlueprintPure)
    bool IsNowBunshin() const;
    
};

