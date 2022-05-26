#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "ETrese_ex047WorldTypes.h"
#include "TresEnemyPawn_e_ex047.generated.h"

class UParticleSystem;

UCLASS()
class ATresEnemyPawn_e_ex047 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETrese_ex047WorldTypes> m_WorldType;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MasicParticle;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MasicParticleSocketName;
    
    ATresEnemyPawn_e_ex047();
protected:
    UFUNCTION(BlueprintPure)
    bool IsShotHit() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRevengeCoolDownTime() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCallEnemyInvisible();
    
    UFUNCTION(BlueprintCallable)
    void BpDoPop();
    
};

