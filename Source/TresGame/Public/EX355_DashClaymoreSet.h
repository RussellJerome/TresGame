#pragma once
#include "CoreMinimal.h"
#include "EX355_DashClaymoreSet.generated.h"

class ATresProjectile_e_ex355_Claymore_Idle;
class ATresCharPawnBase;

USTRUCT(BlueprintType)
struct FEX355_DashClaymoreSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresProjectile_e_ex355_Claymore_Idle* m_Claymore;
    
    UPROPERTY()
    ATresCharPawnBase* m_Owner;
    
public:
    TRESGAME_API FEX355_DashClaymoreSet();
};

