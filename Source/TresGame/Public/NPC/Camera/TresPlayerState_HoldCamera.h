#pragma once
#include "CoreMinimal.h"
#include "TresCharState_HoldCamera.h"
#include "TresPlayerState_HoldCamera.generated.h"

class UTresPhotoMissionComponent;
class ATresCameraHoldCamera;
class UTresNpcSmartphoneCameraComponent;
class UTresHiddenMickeyComponent;
class ATresGimmickRA_PuddingManager;

UCLASS()
class UTresPlayerState_HoldCamera : public UTresCharState_HoldCamera {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ATresCameraHoldCamera* m_pCamera;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UTresHiddenMickeyComponent> m_pCurrentLuckyMarker;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UTresHiddenMickeyComponent> m_pTargetLuckyMarker;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UTresPhotoMissionComponent>> m_pTargetPhotoMissionMarkerList;
    
    UPROPERTY()
    TWeakObjectPtr<ATresGimmickRA_PuddingManager> m_pPudManager;
    
    UPROPERTY()
    TArray<FName> m_ShotTargetList;
    
    UPROPERTY()
    TArray<FName> m_MissedTargetList;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UTresNpcSmartphoneCameraComponent> m_pNpcReactionMarker;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UTresNpcSmartphoneCameraComponent> m_pNpcTargetMarker;
    
    UPROPERTY()
    TArray<int32> m_SelfieActionIdxList;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UTresHiddenMickeyComponent>> m_pDetectedLuckyMarkerList;
    
public:
    UTresPlayerState_HoldCamera();
};

