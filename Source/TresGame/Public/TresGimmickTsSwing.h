#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickTsSwing.generated.h"

class USceneComponent;
class ATresCharPawnBase;
class UCurveFloat;
class AActor;
class UPrimitiveComponent;

UCLASS(Abstract)
class ATresGimmickTsSwing : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ActionNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UseNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ActionSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* FadeCurve;
    
    ATresGimmickTsSwing();
    UFUNCTION(BlueprintNativeEvent)
    void UpdateAction(float Delta);
    
    UFUNCTION(BlueprintNativeEvent)
    void SwingStartSetBase(AActor* inActor, UPrimitiveComponent* InComponent, const FName InBoneName);
    
    UFUNCTION(BlueprintNativeEvent)
    void SwingEndSetBase(AActor* inActor, UPrimitiveComponent* InComponent, const FName InBoneName);
    
    UFUNCTION(BlueprintCallable)
    void LeaveAction(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable)
    void EntryAction(ATresCharPawnBase* pPawn, USceneComponent* pAttachedParent);
    
    UFUNCTION(BlueprintNativeEvent)
    void EndAction(bool Broken);
    
    UFUNCTION(BlueprintNativeEvent)
    void BeginAction();
    
};

