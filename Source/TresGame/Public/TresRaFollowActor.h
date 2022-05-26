#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresOnFollowActorTouchedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "EFollowActorState.h"
#include "TresRaFollowActor.generated.h"

class ATresRaFollowActor;
class UTresDebugEditorRaFollowActorComponent;
class USplineComponent;

UCLASS(Abstract)
class ATresRaFollowActor : public ATresCharPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_GroupNumber;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ReactDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MaxAngularSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_FollowPositionOffset;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bFollowYawLock: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bFollowRotationLock: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_EscapePositionOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_FollowtDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AccelerateDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_StopDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RotationAdjustDistance;
    
    UPROPERTY(BlueprintAssignable)
    FTresOnFollowActorTouched OnFollowActorTouched;
    
    UPROPERTY(Export)
    UTresDebugEditorRaFollowActorComponent* EditorInfoComp;
    
    UPROPERTY(Export)
    USplineComponent* m_Spline;
    
public:
    ATresRaFollowActor();
protected:
    UFUNCTION(BlueprintCallable)
    void SetActorState(EFollowActorState State);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveFollowActorTouched(int32 groupNumber);
    
    UFUNCTION(BlueprintCallable)
    static void InitGroup(TArray<ATresRaFollowActor*> groupActors);
    
    UFUNCTION()
    void _OnGroupActorTouched(int32 groupNumber);
    
};

