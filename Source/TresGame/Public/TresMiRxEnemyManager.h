#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresCommunicationTerminalInterface.h"
#include "TresMiRxReplicaStateTable.h"
#include "TresMiRxEnemyManager.generated.h"

UCLASS()
class ATresMiRxEnemyManager : public AActor, public ITresCommunicationTerminalInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWaitTimeOfShotLaser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fIntervalOfSingleLaserOmen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fIntervalForWarpAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fIntervalForSimultaneoutWarpAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fIntervalForSimultaneoutWarpAttackReturn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWaitTimeForStartSimultaneoutWarpAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresMiRxReplicaStateTable> m_StateTable;
    
public:
    ATresMiRxEnemyManager();
    UFUNCTION(BlueprintCallable)
    void BP_ToSecondHalf();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetStateTableIndex(int32 dIndex, float fOverrideCoolDownTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEnableAttackForLevel(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestFullFireLaser();
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestActionStart();
    
    UFUNCTION(BlueprintPure)
    bool BP_IsSimultaneoutWarpAttackState() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_IsIdleState() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

