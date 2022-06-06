#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresRaPuddingEffectRef.h"
#include "TresRaPuddingPosition.h"
#include "TresRaPuddingSchedule.h"
#include "ETresCommandKind.h"
#include "TresGimmickRA_Pudding_ControlActor.generated.h"

class UTresDebugEditorRaPuddingControllerComponent;
class ATresPlayerControllerBase;
class UTresReactorComponent;
class ATresGimmickRA_PuddingManager;
class UTresGimmickRA_Pudding_PhotoComponent;
class ATresRaPuddingSplineActor;
class UParticleSystem;
class ATresCharPawnBase;

UCLASS()
class ATresGimmickRA_Pudding_ControlActor : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 WanderPudding: 1;
    
    UPROPERTY(EditAnywhere)
    float WanderRange;
    
    UPROPERTY(EditAnywhere)
    float WanderReactRange;
    
    UPROPERTY(EditAnywhere)
    uint8 ReactToPlayer: 1;
    
    UPROPERTY(EditAnywhere)
    float ReactDistance;
    
    UPROPERTY(EditAnywhere)
    uint8 ResetOnPCLeave: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 IgnoreGravity: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 IgnoreShutter: 1;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRaPuddingEffectRef> EffectRefList;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresRaPuddingPosition> PositionInfoList;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FTresRaPuddingSchedule> ScheduleList;
    
    UPROPERTY(EditAnywhere)
    uint8 DebugFlag_DebugDraw: 1;
    
    UPROPERTY(Export)
    UTresDebugEditorRaPuddingControllerComponent* EditorInfoComp;
    
private:
    UPROPERTY()
    ATresPlayerControllerBase* m_pPC;
    
    UPROPERTY(Export)
    UTresReactorComponent* m_pReactor;
    
    UPROPERTY()
    ATresGimmickRA_PuddingManager* m_pPudMng;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UTresGimmickRA_Pudding_PhotoComponent>> m_NormalCompList;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UTresGimmickRA_Pudding_PhotoComponent>> m_ExtraCompList;
    
    UPROPERTY()
    TMap<FName, TWeakObjectPtr<ATresRaPuddingSplineActor>> m_PositionDic;
    
    UPROPERTY()
    TMap<FName, TWeakObjectPtr<UParticleSystem>> m_EffectDic;
    
public:
    ATresGimmickRA_Pudding_ControlActor();
private:
    UFUNCTION()
    void OnReactorCommand(ATresCharPawnBase* CommandCauser, TEnumAsByte<ETresCommandKind> CommandID, UTresReactorComponent* ReactorComponent);
    
};

