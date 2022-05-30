#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresLoadAsset.h"
#include "UObject/NoExportTypes.h"
#include "TresPlayerPawnLoadAsset.generated.h"

class ATresCameraRailSlideMI;
class UTresPlayerStateEvent;
class ATresCameraNormal;
class ATresCameraRcHe001;
class ATresCameraDiving;
class ATresCameraWall;
class ATresCameraPreview;
class ATresCameraTeaCup;
class ATresCameraMerryGoRound;
class ATresCameraAirplane;
class ATresCameraDMSimba;
class ATresCameraDMAriel;
class ATresCameraHoldCamera;
class UCameraAnim;
class ATresCameraFRPowerStrike;
class UParticleSystem;

UCLASS()
class UTresPlayerPawnLoadAsset : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UTresPlayerStateEvent>> PlayerStateEventCamera;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraNormal> PlayerCameraNormal;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraWall> PlayerCameraWall;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraDiving> PlayerCameraDiving;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraPreview> PlayerCameraPreview;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraRailSlideMI> PlayerCameraRailSlideMI;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraRcHe001> PlayerCameraRcHe001;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraTeaCup> PlayerCameraTeaCup;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraMerryGoRound> PlayerCameraMerryGoRound;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraNormal> PlayerCameraWaterRide;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraAirplane> PlayerCameraAirplane;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraDMSimba> PlayerCameraDMSimba;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraDMAriel> PlayerCameraDMAriel;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraHoldCamera> PlayerCameraHoldCamera;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraNormal> PlayerCameraFRWoodyBuzzRocket;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraAirplane> PlayerCameraFRWoodyBuzzRocketMove;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraFRPowerStrike> PlayerCameraFRPowerStrike;
    
    UPROPERTY(EditDefaultsOnly)
    UCameraAnim* m_PlayerOpenTreasureBoxCameraAnim;
    
    UPROPERTY(EditDefaultsOnly)
    UCameraAnim* m_PlayerDieCameraAnim;
    
    UPROPERTY(EditDefaultsOnly)
    UCameraAnim* m_PlayerGameOverCameraAnim;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PlayerGameOverHeartEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_PlayerGameOverHeartLocation;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PlayerGameOverLightEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_PlayerGameOverLightLocation;
    
    UPROPERTY(EditDefaultsOnly)
    UCameraAnim* m_PlayerMissionFailedCameraAnim;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PlayerMissionFailedLightEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_PlayerMissionFailedLightLocation;
    
    UTresPlayerPawnLoadAsset();
};

