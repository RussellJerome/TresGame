#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresE_EX781_CallGigasPatternParam.h"
#include "TresGenerator_e_ex781_CallGigas.generated.h"

class UTresStateBase;
class ATresEnemyPawnBase;

UCLASS()
class ATresGenerator_e_ex781_CallGigas : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_EX781_CallGigasPatternParam> m_GigasPatternParam;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UTresStateBase>> m_GigasActionList;
    
private:
    UPROPERTY()
    TWeakObjectPtr<AActor> m_MyTarget;
    
    UPROPERTY()
    ATresEnemyPawnBase* m_EndGigas;
    
public:
    ATresGenerator_e_ex781_CallGigas();
};

