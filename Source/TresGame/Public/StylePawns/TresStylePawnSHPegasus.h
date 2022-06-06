#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresStylePawnBase.h"
#include "TresStylePawnSHPegasus.generated.h"

class ATresCharPawnBase;
class ATresProjectileBase;
class ATresAccompanyPawnBase;

UCLASS()
class ATresStylePawnSHPegasus : public ATresStylePawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDispDebugLine: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjThunder;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_SHChariotAssets;
    
private:
    UPROPERTY()
    ATresCharPawnBase* m_pTargetActor;
    
    UPROPERTY()
    ATresCharPawnBase* m_pNextActor;
    
public:
    ATresStylePawnSHPegasus();
    UFUNCTION(BlueprintPure)
    float GetDeltaYaw() const;
    
};

