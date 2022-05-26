#pragma once
#include "CoreMinimal.h"
#include "TresGimmickRecordChangePlayingSignatureDelegate.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickRecordTurnedTopSpeedLightsSignatureDelegate.h"
#include "TresGimmickRecordUpdateLightsRateSignatureDelegate.h"
#include "TresGimmickRecordPlayTimeFinishedSignatureDelegate.h"
#include "TresGimmickRecordChangeAttachmentSignatureDelegate.h"
#include "TresGimmickRecordChangeOnRecordSignatureDelegate.h"
#include "TresGimmickRecord.generated.h"

class USoundBase;
class AActor;
class ATresGimmickFrogPerformer;
class USceneComponent;

UCLASS(Config=Game)
class ATresGimmickRecord : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTresGimmickRecordTurnedTopSpeedLightsSignature TurnedTopSpeedLights;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickRecordUpdateLightsRateSignature UpdateLightsRate;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickRecordPlayTimeFinishedSignature PlayTimeFinished;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickRecordChangeAttachmentSignature ChangeAttachment;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickRecordChangePlayingSignature ChangePlaying;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickRecordChangeOnRecordSignature ChangeOnRecord;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngleDumping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngleAccelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* PlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FinishPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttachmentRecordLengthMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* AttachedSoundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ATresGimmickFrogPerformer*> FrogList;
    
public:
    ATresGimmickRecord();
protected:
    UFUNCTION(BlueprintCallable)
    void SetSpeedRateImidiately(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRecordActive(bool NewActive);
    
    UFUNCTION(BlueprintCallable)
    void SetPitchFade(float Rate, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxRotationRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetLockInput(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenRegistedFrogs(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetFinished(bool Finish);
    
    UFUNCTION(BlueprintCallable)
    void SetBgm(USoundBase* NewSound);
    
    UFUNCTION(BlueprintCallable)
    void SetAutomaticRotate(float NewSpeedRate);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachedParent(USceneComponent* pAttachedParent);
    
    UFUNCTION(BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable)
    void CutsceneEndRecord();
    
    UFUNCTION(BlueprintCallable)
    void ClearPitchFade();
    
    UFUNCTION(BlueprintNativeEvent)
    void ChangePlayingState(bool Playing);
    
};

