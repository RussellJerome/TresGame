#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EX355_ThrowAirSet.generated.h"

class ATresProjectileBase;
class ATresCharPawnBase;
class AActor;

USTRUCT(BlueprintType)
struct FEX355_ThrowAirSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
protected:
    UPROPERTY()
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY()
    AActor* m_Target;
    
public:
    TRESGAME_API FEX355_ThrowAirSet();
};

