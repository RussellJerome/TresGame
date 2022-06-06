#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickRA_PuddingManager.generated.h"

class ATresGimmickRA_Pudding_ControlActor;

UCLASS()
class ATresGimmickRA_PuddingManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PhotoCountMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoldCameraWaitTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GameEndWaitTime;
    
private:
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresGimmickRA_Pudding_ControlActor>> m_ControlActorList;
    
    UPROPERTY()
    TWeakObjectPtr<ATresGimmickRA_Pudding_ControlActor> m_pShotRaPuddingControlActor;
    
public:
    ATresGimmickRA_PuddingManager();
    UFUNCTION(BlueprintCallable)
    void SetGameStart();
    
    UFUNCTION(BlueprintCallable)
    void SetGameEnd();
    
    UFUNCTION(BlueprintCallable)
    void RemoveRaPuddingPhotos();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTakePhotoSucceed(int32 Score, bool bBestShot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveMissionCompleted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDebugForceReload();
    
    UFUNCTION(BlueprintPure)
    bool IsAlbumFreeSpaceEnough() const;
    
};

