#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemyPartsBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipParts629Pawn.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresGumiShipParts629Pawn : public ATresGumiShipEnemyPartsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pReflectLaser1VFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pReflectLaser2VFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pReflectLaser3VFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fReflectLaserTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_fMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AttackTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAdvanceDistance;
    
public:
    ATresGumiShipParts629Pawn();
    UFUNCTION(BlueprintPure)
    bool _StartAttack(FVector _targetVect, int32 _attack);
    
    UFUNCTION(BlueprintPure)
    bool _IsAttackEnable();
    
};

