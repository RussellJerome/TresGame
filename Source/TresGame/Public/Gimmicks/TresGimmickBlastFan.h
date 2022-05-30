#pragma once
#include "CoreMinimal.h"
#include "TresGimmickStaticBase.h"
#include "TresGimmickBlastFanChangeActiveFanSignatureDelegate.h"
#include "TresGimmickBlastFan.generated.h"

class UCurveFloat;
class USoundBase;

UCLASS(Config=Game)
class ATresGimmickBlastFan : public ATresGimmickStaticBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTresGimmickBlastFanChangeActiveFanSignature ChangeActiveFan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* RotCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ActiveRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableFanCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FanModeMax;
    
    ATresGimmickBlastFan();
    UFUNCTION(BlueprintNativeEvent)
    void UpdateFanMode(int32 FanMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFanActive(bool ActiveFan);
    
    UFUNCTION(BlueprintCallable)
    void NextFanMode(float WaitTime);
    
    UFUNCTION(BlueprintNativeEvent)
    void ChangeRotation(float SpeedRate);
    
};

