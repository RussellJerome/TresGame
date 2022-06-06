#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresVideoPlayFinishSignatureDelegate.h"
#include "TresVideoPrepareFinishSignatureDelegate.h"
#include "TresVideoComponent.generated.h"

class UTextureRenderTarget2D;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresVideoComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTresVideoPlayFinishSignature OnVideoPlayFinish;
    
    UPROPERTY(BlueprintAssignable)
    FTresVideoPrepareFinishSignature OnVideoPrepareFinish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTextureRenderTarget2D* m_TextureRenderTarget2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_MovieFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_AutoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Prepare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ForUI;
    
    UPROPERTY(Transient)
    bool m_IsPrepared;
    
    UPROPERTY(Transient)
    bool m_RetryWhenPlayTimeOut;
    
    UPROPERTY(Transient)
    int32 m_RetryCount;
    
    UPROPERTY(Transient)
    bool m_IsPrepareCancel;
    
    UPROPERTY(Transient)
    bool m_IsReserveStopVideo;
    
public:
    UTresVideoComponent();
    UFUNCTION(BlueprintCallable)
    void StopVideo();
    
    UFUNCTION(BlueprintCallable)
    void ResumeVideo();
    
    UFUNCTION(BlueprintCallable)
    void ReserveStopVideo();
    
    UFUNCTION(BlueprintCallable)
    void PrepareVideo();
    
    UFUNCTION(BlueprintCallable)
    void PlayVideo();
    
    UFUNCTION(BlueprintCallable)
    void PauseVideo();
    
    UFUNCTION(BlueprintCallable)
    bool IsPreparing();
    
    UFUNCTION(BlueprintCallable)
    bool IsPrepared();
    
    UFUNCTION(BlueprintCallable)
    bool IsPreparable();
    
    UFUNCTION(BlueprintCallable)
    void CancelPrepareVideo();
    
};

