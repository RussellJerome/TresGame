#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBossEnemyPawnBase.h"
#include "TresGumiShipEnemy619Pawn.generated.h"

class UParticleSystem;
class UTresGumiShipWeaponSequence;
class UTresSkeletalMeshComponent;

UCLASS(Abstract)
class ATresGumiShipEnemy619Pawn : public ATresGumiShipBossEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UTresGumiShipWeaponSequence>> m_pWeapons;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fGatlingTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fGatlingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fGatlingRand;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fLaserTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fLaserCloseTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fLaserAngle;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fBlindSpotTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fIdolingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAdvanceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pShotVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pShoulderPartsVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_StartShoulderG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_EndShoulderG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_StartShoulderTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_EndShoulderTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pUFOMuzzleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_StartUFOMuzzleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_EndUFOMuzzleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pVernierVFX;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* m_pUFO_SkeletalMesh;
    
public:
    ATresGumiShipEnemy619Pawn();
private:
    UFUNCTION(BlueprintCallable)
    void SetRocketPunch(int32 NO);
    
    UFUNCTION(BlueprintCallable)
    bool SetLaserAngle(float fAngle);
    
    UFUNCTION(BlueprintCallable)
    bool ResetLaser();
    
    UFUNCTION(BlueprintPure)
    bool IsRightEnable();
    
    UFUNCTION(BlueprintPure)
    bool IsLeftEnable();
    
};

