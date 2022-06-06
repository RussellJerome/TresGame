#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemyPartsBase.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipParts708Pawn.generated.h"

class UParticleSystem;
class UPrimitiveComponent;
class AActor;

UCLASS(Abstract)
class ATresGumiShipParts708Pawn : public ATresGumiShipEnemyPartsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pDeadAssetVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pBackfire2VFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pExplosionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAnglespeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fFlyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAdvanceDistance;
    
public:
    ATresGumiShipParts708Pawn();
protected:
    UFUNCTION()
    void _OnHitTreasure(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
};

