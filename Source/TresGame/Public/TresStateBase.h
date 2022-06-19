#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresAnimInterface.h"
#include "TresNotifyInterface.h"
#include "ETresStateID.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresStateBase.generated.h"

class ATresCharPawnBase;
class ATresAIController;
class ATresPlayerControllerBase;
class ATresPawnBase;
class ATresSceneManager;
class ATresPlayerPawnBase;
class APawn;
class AController;
class AActor;
class USQEX_ParticleAttachDataAsset;
class UAnimSequenceBase;

UCLASS(Abstract, BlueprintType)
class UTresStateBase : public UObject, public ITresAnimInterface, public ITresNotifyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName MyStateName;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresStateID> MyStateID;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bEnableRecycle: 1;
    
public:
    UPROPERTY(BlueprintReadOnly)
    ATresCharPawnBase* MyCharPawn;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    int32 m_nSubStep;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    int32 m_TurnIndex;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float m_TurnToTargetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    uint32 m_bEnableChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    uint32 m_bReverseLeg: 1;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    uint32 m_bEnableTraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    uint32 m_bEnableTurnToTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    uint32 m_bFaceAt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    uint32 m_bEnableInput: 1;
    
    UTresStateBase();
    UFUNCTION(BlueprintPure)
    ATresSceneManager* GetTresSceneManager() const;
    
    UFUNCTION(BlueprintPure)
    ATresPlayerPawnBase* GetTresPlayerPawnBase() const;
    
    UFUNCTION(BlueprintPure)
    ATresPlayerControllerBase* GetTresPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    ATresPawnBase* GetTresPawnBase() const;
    
    UFUNCTION(BlueprintPure)
    ATresCharPawnBase* GetTresCharPawnBase() const;
    
    UFUNCTION(BlueprintPure)
    ATresAIController* GetTresAIController() const;
    
    UFUNCTION(BlueprintPure)
    FName GetStateName() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETresStateID> GetStateID() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ENetRole> GetOwnerRole() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ENetRole> GetOwnerRemoteRole() const;
    
    UFUNCTION(BlueprintPure)
    AController* GetController() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetActor() const;
    
    UFUNCTION(BlueprintCallable)
    void DoRestartAgain();
    
    UFUNCTION(BlueprintCallable)
    void DoRestart();
    
    UFUNCTION(BlueprintCallable)
    void DoFinish();
    
    UFUNCTION(BlueprintCallable)
    void DoChain();
    
    UFUNCTION(BlueprintCallable)
    void DoAgain();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEffectAttach(int32 InGroup);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEffect(FName InAttachName, USQEX_ParticleAttachDataAsset* InAttachData, int32 InGroupID);
    
    UFUNCTION(BlueprintPure)
    bool BP_IsAnimEnd(FName InSlotName) const;
    
    UFUNCTION(BlueprintCallable)
    void BP_EndEffect(int32 InGroupID, bool bEqual);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimStop(FName InSlotName, float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    bool BP_AnimSetBlendSpaceParam(FName InSlotName, float InX, float InY, float InZ);
    
    UFUNCTION(BlueprintCallable)
    float BP_AnimPlaySequence(UAnimSequenceBase* InAsset, FName InSlotName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, bool InRootTrans, bool InRootRot, const FVector2D& InRootTransScale);
    
    UFUNCTION(BlueprintCallable)
    float BP_AnimPlay(FName InAnimName, float InBlendInTime, float InBlendOutTime, bool InLoop, bool InRootTrans, bool InRootRot, float InPlayRate);
    
    UFUNCTION(BlueprintPure)
    FName BP_AnimGetUseSlotName(int32 InIndex) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

