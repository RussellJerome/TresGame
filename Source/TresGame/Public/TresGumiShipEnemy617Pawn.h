#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFreeFlightTypeEnemyBase.h"
#include "TresGumiShipEnemy617Pawn.generated.h"

class UParticleSystem;
class UTresGumiShipWeaponSequence;
class UParticleSystemComponent;

UCLASS(Abstract)
class ATresGumiShipEnemy617Pawn : public ATresGumiShipFreeFlightTypeEnemyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TArray<UTresGumiShipWeaponSequence*> m_pWeapons;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMovieRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fLaserTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fLaserWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AddDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pAfterVFX;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pDisappearAssetVFX;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pDisappearEffect;
    
public:
    ATresGumiShipEnemy617Pawn();
};

