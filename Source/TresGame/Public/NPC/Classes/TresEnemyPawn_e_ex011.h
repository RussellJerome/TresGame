#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresBoneNames_e_ex011.h"
#include "TresWheelRotationWork_e_ex011.h"
#include "TresE_ex011ConnectEffectParam.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex011.generated.h"

class USceneComponent;
class AActor;
class ATresEnemyPawn_e_ex011;
class ATresEnemyFortressFloorActor_e_ex011;
class UTresAttackDefinitionBase;
class UTresActionDefinitionBase;

UCLASS()
class ATresEnemyPawn_e_ex011 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* CoopJumpLocationComponent;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxConnect;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnNumConnect;
    
    UPROPERTY(EditDefaultsOnly)
    FTresBoneNames_e_ex011 m_ConnectFortressBoneNames;
    
    UPROPERTY(EditDefaultsOnly)
    FTresBoneNames_e_ex011 m_ConnectCarriageBoneNames;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWheelRotationWork_e_ex011> m_WheelRotationWorkList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ConnectBoneDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PassStepHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HillClimbAngle;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsAutoCarriageMode: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresActionDefinitionBase> m_ToCarriageActionClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StringConnectPointDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StringConnectPointDistanceInterpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StringRotationAddConnectPointDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StringRotationAddConnectPointDistanceMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StringRotationAddConnectPointDistanceRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StringRotationAdjustPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RodConnectPointDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RodConnectPointDistanceInterpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RodRotationAdjustPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RodConnectPointMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> m_CoopJumpActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAttackDefinitionBase> m_CoopAttackDefinitionClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyFortressFloorActor_e_ex011> m_FortressFloorCollisionActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    FTresE_ex011ConnectEffectParam m_ConnectEffectParam;
    
    UPROPERTY(SaveGame)
    int32 m_NumConnect;
    
    UPROPERTY(SaveGame)
    uint8 m_bIsEndFortressMode: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RepelSpeed;
    
public:
    ATresEnemyPawn_e_ex011();
    UFUNCTION(BlueprintCallable)
    void ResetCarriageStartState();
    
    UFUNCTION()
    bool IsTop() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetWheelRotation(FName InBoneName, bool bInverse) const;
    
    UFUNCTION()
    int32 GetNum() const;
    
    UFUNCTION(BlueprintPure)
    void GetConnectPawnList(TArray<ATresEnemyPawn_e_ex011*>& OutList) const;
    
    UFUNCTION()
    void DebugToFortressMode();
    
    UFUNCTION()
    void DebugToCarriageMode();
    
    UFUNCTION()
    void DebugSetNumTailSwing(int32 Num);
    
    UFUNCTION()
    void DebugSetNumDash(int32 Num);
    
    UFUNCTION()
    void DebugSetNumBombardment(int32 Num);
    
    UFUNCTION()
    void DebugSetEnableDrawTarget(int32 bEnable);
    
    UFUNCTION()
    void DebugDisappearConnectEffect();
    
    UFUNCTION()
    void DebugDestroyChild(int32 Num);
    
    UFUNCTION()
    void DebugCreateChild(int32 Num);
    
    UFUNCTION()
    void DebugAppearConnectEffect();
    
    UFUNCTION(BlueprintCallable)
    void BP_OnToCarriageActionSkipBattleStart();
    
    UFUNCTION(BlueprintCallable)
    void BP_OnToCarriageActionSkip();
    
    UFUNCTION(BlueprintCallable)
    void BP_MethdToCarriageAction();
    
    UFUNCTION(BlueprintCallable)
    void BP_IdleToCarriageAction();
    
    UFUNCTION(BlueprintCallable)
    void BP_ApplyCarriageMode();
    
};

