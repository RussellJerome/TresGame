#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBossEnemyPawnBase.h"
#include "TresGumiShipEnemy623Pawn.generated.h"

class USoundBase;

UCLASS(Abstract)
class ATresGumiShipEnemy623Pawn : public ATresGumiShipBossEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 MotionMode;
    
    UPROPERTY(BlueprintReadWrite)
    bool Locked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadRollSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BottomRollSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FalldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FalldownSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ALSSwitchingTime;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* OriginalBGM;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* ArrangeBGM;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* MonitorOriginalBGM;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* MonitorArrangeBGM;
    
    ATresGumiShipEnemy623Pawn();
    UFUNCTION(BlueprintCallable)
    void SetALSPhase(int32 phase);
    
    UFUNCTION(BlueprintPure)
    int32 GetALSPhase() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAttack();
    
};

