#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex044.generated.h"

class ATresPlayerPawnBase;
class UTresPoleComponent;
class ATresGimmickBxStepBanAsset;

UCLASS()
class ATresEnemyPawn_e_ex044 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FVector m_vRootLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator m_rRot;
    
public:
    UPROPERTY(BlueprintReadWrite)
    FVector m_vNorm;
    
    UPROPERTY(BlueprintReadWrite)
    float m_fHeight;
    
    UPROPERTY(BlueprintReadWrite)
    float m_fYaw;
    
    UPROPERTY(BlueprintReadWrite)
    float m_fPitch;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bPipeVisible;
    
    UPROPERTY(BlueprintReadWrite)
    ATresPlayerPawnBase* m_pPlayer;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTresPoleComponent* m_pPoleComp;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxPitchAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinPitchAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fPoleTurnChangeAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fPoleTurnUnderHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fPoleTurnTopHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMaxPipeLength;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bAIPawnOnWall;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchDamp1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchDamp2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchChangeDampAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchAccept;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPitchVib;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawDamp1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawDamp2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawChangeDampAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawAccept;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fYawVib;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<ATresGimmickBxStepBanAsset*> m_GimmickArray;
    
    ATresEnemyPawn_e_ex044();
    UFUNCTION(BlueprintCallable)
    bool IsPlayerPoleTurning();
    
    UFUNCTION(BlueprintCallable)
    bool IsOnWall();
    
    UFUNCTION(BlueprintCallable)
    bool IsOnAIPoint();
    
    UFUNCTION(BlueprintCallable)
    float GetNormHeightFromWorldPositionWithinPipe(FVector InPos, float inUnder, float inTop);
    
    UFUNCTION(BlueprintCallable)
    float GetNormHeightFromWorldPosition(FVector InPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetDirection();
    
    UFUNCTION(BlueprintCallable)
    FVector GetBodyLocation();
    
    UFUNCTION(BlueprintPure)
    FRotator FindRotationBetweenVectors(const FVector& From, const FVector& To);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyPipeCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Code_CheckHeight(float inHeight, float inPletTurnRadius, bool& outResult, float& outMaxHeight);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePoleComp(bool bActive);
    
};

