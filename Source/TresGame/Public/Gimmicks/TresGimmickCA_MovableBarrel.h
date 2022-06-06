#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresGimmickCA_TickControlInterface.h"
#include "ETresBodyPushPowerLevel.h"
#include "TresGimmickDitherFadeInterface.h"
#include "CAMovableBarrelParam.h"
#include "CAMovableBarrelPrizeParam.h"
#include "CAMovableBarrelRunAwayParam.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickCA_MovableBarrel.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresGimmickCA_MovableBarrel : public ATresCharPawnBase, public ITresGimmickCA_TickControlInterface, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCAMovableBarrelParam m_Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCAMovableBarrelPrizeParam m_prizeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCAMovableBarrelRunAwayParam m_runAwayParam;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DestroyEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_DestroyEffectSocket;
    
    UPROPERTY(EditAnywhere)
    ETresBodyPushPowerLevel m_PushPower;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_TickEnableRange;
    
public:
    ATresGimmickCA_MovableBarrel();
protected:
    UFUNCTION(BlueprintPure)
    bool UseNaviMeshCheck() const;
    
    UFUNCTION(BlueprintCallable)
    void SetUseNaviMeshCheck(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetStopMovement(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRunAwayFromPlayerMode(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionChangeInterval(float Value);
    
    UFUNCTION(BlueprintCallable)
    bool RequestStartMove();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnHitPointZero();
    
    UFUNCTION(BlueprintPure)
    bool IsStopMovement() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRunAwayFromPlayerMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetDirectionChangeInterval() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

