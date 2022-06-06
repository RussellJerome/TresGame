#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresEnemyUniqueID.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_ex002.generated.h"

class ATresAccompanyPawnBase;
class ATresProjectileBase;

UCLASS()
class ATresNpcPawn_n_ex002 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FRShieldGuardianBP;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FRGoofyShootBP;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_GoofyShootProj;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresEnemyUniqueID> m_GoofyShootExpEnemyList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_PawnID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ScrumModeCountMax;
    
    UPROPERTY()
    bool m_IsLinkMode;
    
    ATresNpcPawn_n_ex002();
};

