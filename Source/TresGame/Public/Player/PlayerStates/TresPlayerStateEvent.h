#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "ETresPlayerSpecificActionID.h"
#include "ETresAnimNotifyBpEventID.h"
#include "ETresCommandKind.h"
#include "ETresActorSpecificActionID.h"
#include "ETresStateID.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresPlayerStateEvent.generated.h"

class ATresCharPawnBase;
class AActor;
class ATresNote;
class UCameraShake;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class UTresPlayerStateEvent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName m_StEvName;
    
public:
    UTresPlayerStateEvent();
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlayerSpecificAction(ETresPlayerSpecificActionID ActionID, int32 SubID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlayerEndCommandAction(ETresCommandKind CommandKind);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlayerDtorState(ETresStateID StateID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlayerCtorState(ETresStateID StateID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlayerBeginCommandAction(ETresCommandKind CommandKind);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAnimNotifyStartBpEvent(ATresCharPawnBase* SendActor, FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAnimNotifyEndBpEvent(ATresCharPawnBase* SendActor, FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveActorSpecificAction(ETresActorSpecificActionID ActionID, AActor* SendActor, int32 SubID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Event_EnemyPopCamera(ATresNote* Note, const FString& Parameter, float Distance, const FVector& TargetOffset, const FRotator& Rotation, float FOV, TSubclassOf<UCameraShake> Shake, float EndDelay, float EndBlendTime);
    
};

