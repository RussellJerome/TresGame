#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "TresComNpcReaction.h"
#include "TresComNpcActorInfo.h"
#include "TresComNpcLookInfo.h"
#include "TresComNpcPrizeInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresComNpcActionComponent.generated.h"

class UTresComNpcVoiceSet;
class UTresComNpcActionContext;
class ATresCharPawnBase;
class UTresComNpcActionSeq;
class AController;
class UTresComNpcActionSet;
class UObject;
class AActor;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TRESGAME_API UTresComNpcActionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresComNpcMovePawnSignature, ATresCharPawnBase*, InTargetPawn);
    
    UPROPERTY(BlueprintAssignable)
    FTresComNpcMovePawnSignature OnMovePawnCreate;
    
    UPROPERTY(BlueprintAssignable)
    FTresComNpcMovePawnSignature OnMovePawnDelete;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresComNpcActionSeq*> m_ActionSeqDatas;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresComNpcActionSet*> m_ActionSetDatas;
    
    UPROPERTY(EditAnywhere)
    float m_fFeelOutWorldZ;
    
    UPROPERTY(EditAnywhere)
    int32 m_MaxControllerNum;
    
    UPROPERTY(EditAnywhere)
    int32 m_MaxDispActorNum;
    
    UPROPERTY(EditAnywhere)
    float m_fCameraOutDir;
    
    UPROPERTY(EditAnywhere)
    float m_fCameraOutRange;
    
    UPROPERTY(EditAnywhere)
    float m_fCameraInFeadTime;
    
    UPROPERTY(EditAnywhere)
    float m_fCameraOutFeadTime;
    
    UPROPERTY(EditAnywhere)
    float m_fNearCameraOutFeadTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AController> m_AIControllerClass;
    
    UPROPERTY(EditAnywhere)
    float m_fForceBlendRate;
    
    UPROPERTY(EditAnywhere)
    TArray<float> m_MoveDistanceFactor;
    
    UPROPERTY(EditAnywhere)
    TArray<float> m_NoMoveDistanceFactor;
    
    UPROPERTY(EditAnywhere)
    float m_fPrioryRatePcMin;
    
    UPROPERTY(EditAnywhere)
    float m_fPrioryRatePcMax;
    
    UPROPERTY(EditAnywhere)
    float m_fPrioryRateNoTurnMin;
    
    UPROPERTY(EditAnywhere)
    float m_fPrioryRateNoTurnMax;
    
    UPROPERTY(EditAnywhere)
    float m_fLookAtLimitDir;
    
    UPROPERTY(EditAnywhere)
    float m_fLookAtBlendTime;
    
    UPROPERTY(EditAnywhere)
    int32 m_fLookAtLodLimit;
    
    UPROPERTY(EditAnywhere)
    float m_fMinDegree;
    
    UPROPERTY(EditAnywhere)
    float m_fInPushRange;
    
    UPROPERTY(EditAnywhere)
    float m_fStaggerRange;
    
    UPROPERTY(EditAnywhere)
    float m_fMoveLineRange;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcReaction> m_ReactionLists;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresComNpcVoiceSet*> m_VoiceSetDatas;
    
    UPROPERTY(EditAnywhere)
    float m_fVoiceTimer;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresComNpcActorInfo> m_EntityActorLists;
    
    UPROPERTY(EditAnywhere)
    int32 m_OneFrameSpawnNum;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresComNpcLookInfo> m_LookAtAnimLists;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcPrizeInfo> m_SpecialPrizeLists;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PrizeLivingTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vPrizeDropOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PrizeDropTimerMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PrizeDropTimerMax;
    
    UPROPERTY(Transient)
    TArray<UTresComNpcActionContext*> m_ActionContexts;
    
public:
    UTresComNpcActionComponent();
    UFUNCTION(BlueprintCallable)
    static void TresComNpcSpecialPerformReaction(UObject* WorldContextObject, FName InReactionName, AActor* in_pActor, float in_fLength);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcSetGroupValue(UObject* WorldContextObject, FName InGroupName, int32 inValue);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcSetGroupActionSetAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcSetGroupActionSet(UObject* WorldContextObject, FName InGroupName, FName InSetName);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcSetDisplayNum(UObject* WorldContextObject, int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcForceOnActor(UObject* WorldContextObject, FName InTagName, bool InDispOn);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcForceOffActor(UObject* WorldContextObject, FName InTagName, bool InDispOff, bool InMoveOff);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcDisableFieldVoice(UObject* WorldContextObject, bool InSwitch);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcDisableCameraDir(UObject* WorldContextObject, bool InSwitch);
    
};

