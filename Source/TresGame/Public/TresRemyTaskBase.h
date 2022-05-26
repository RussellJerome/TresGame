#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresRemyTaskBase.generated.h"

class UTresRemyMouseParameter;

UCLASS()
class UTresRemyTaskBase : public UTresTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTresRemyMouseParameter* MouseParameter;
    
    UPROPERTY(EditDefaultsOnly)
    float MousePowerMulRate;
    
    UPROPERTY(EditDefaultsOnly)
    float MousePowerChangeLimit;
    
    UTresRemyTaskBase();
    UFUNCTION(BlueprintPure)
    bool IsInputMouseDir(FVector2D Dir, float degAngle);
    
    UFUNCTION(BlueprintPure)
    UTresRemyMouseParameter* GetParameter();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetMouseRotationDir();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetMousePower();
    
    UFUNCTION(BlueprintPure)
    FVector2D GetMousePosition();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetMouseMoveDir3D();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector2D GetMouseMoveDir();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector2D GetMouseMoveDelta();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BIE_TickOwner(float Delta);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BIE_SetValue(int32 Index, float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BIE_IsActionSuccessByPC(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    float BIE_GetActionValueByPC(int32 Index);
    
};

