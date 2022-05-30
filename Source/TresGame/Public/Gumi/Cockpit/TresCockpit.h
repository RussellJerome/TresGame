#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresCockpit.generated.h"

class UTresUIP_HudLeft;
class UAudioComponent;
class UTresCockpitParts;
class UTresUIP_HudTarget;
class UTresUIP_NaviMapGra;
class UTresUIP_HudStatus;
class UTresUIP_HudCommand;
class UTresUIP_HudOperation;
class UTresUIP_HudBlackPearlChase;
class UTresUIP_HudRight;
class UTresUIP_HudRailScope;
class UTresUIP_CenterInformation;
class UTresUIP_HudSRide;
class UTresUIP_HudShining;
class UTresUIP_HudGigas;
class UTresUIP_HudGigasGameFront;
class UTresUIP_HudSnowSlide;
class UTresUIP_HudGigasGameBack;
class UTresUIP_HudBmm;
class UTresUIP_HudRalph;
class UTresUIP_HudSpecialShip;
class UTresUIP_SpecialShip;
class UTresUIP_HudPlane;
class UTresUIP_HudSaix;
class UTresUIP_HudDance;
class UTresUIP_HudBaymax;
class UTresUIP_HudPudding;
class UTresUIP_HudWorkshop;
class UTresUIP_HudUx;
class UTresUIP_HudOlaf;
class UTresUIP_HudLuxord;
class UTresUIP_HudXehanort;
class UTresUIP_HudRightKairiCounter;
class UTresUIP_HudLStickInput;
class UTresUIP_HudKeyHole;
class UTextureRenderTarget2D;

UCLASS()
class UTresCockpit : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresCockpitParts* m_pCockpitParts[5];
    
    UPROPERTY(Transient)
    UTresUIP_HudTarget* m_pHudTarget;
    
    UPROPERTY(Transient)
    UTresUIP_HudStatus* m_pHudStatus;
    
    UPROPERTY(Transient)
    UTresUIP_HudCommand* m_pHudCommand;
    
    UPROPERTY(Transient)
    UTresUIP_HudLeft* m_pHudLeft;
    
    UPROPERTY(Transient)
    UTresUIP_HudRight* m_pHudRight;
    
    UPROPERTY(Transient)
    UTresUIP_HudOperation* m_pHudOperation;
    
    UPROPERTY(Transient)
    UTresUIP_HudRailScope* m_pHudRailScope;
    
    UPROPERTY(Transient)
    UTresUIP_CenterInformation* m_pCenterInformation;
    
    UPROPERTY(Transient)
    UTresUIP_NaviMapGra* m_pNaviMapGra;
    
    UPROPERTY(Transient)
    UTresCockpitParts* m_pAdditionalHUD;
    
    UPROPERTY(Transient)
    UTresCockpitParts* m_pAdditionalHUDAry;
    
    UPROPERTY(Transient)
    UTresUIP_HudSRide* m_pHudSRide;
    
    UPROPERTY(Transient)
    UTresUIP_HudGigas* m_pHudGigas;
    
    UPROPERTY(Transient)
    UTresUIP_HudGigasGameFront* m_pHudGigasGameFront;
    
    UPROPERTY(Transient)
    UTresUIP_HudGigasGameBack* m_pHudGigasGameBack;
    
    UPROPERTY(Transient)
    UTresUIP_HudBmm* m_pHudBmm;
    
    UPROPERTY(Transient)
    UTresUIP_HudRalph* m_pHudRalph;
    
    UPROPERTY(Transient)
    UTresUIP_HudBlackPearlChase* m_pHudBlackPearlChase;
    
    UPROPERTY(Transient)
    UTresUIP_HudSpecialShip* m_pHudSpecialShip;
    
    UPROPERTY(Transient)
    UTresUIP_SpecialShip* m_pSpecialShip;
    
    UPROPERTY(Transient)
    UTresUIP_HudPlane* m_pHudPlane;
    
    UPROPERTY(Transient)
    UTresUIP_HudDance* m_pHudDance;
    
    UPROPERTY(Transient)
    UTresUIP_HudBaymax* m_pHudBaymax;
    
    UPROPERTY(Transient)
    UTresUIP_HudSaix* m_pHudSaix;
    
    UPROPERTY(Transient)
    UTresUIP_HudPudding* m_pHudPudding;
    
    UPROPERTY(Transient)
    UTresUIP_HudWorkshop* m_pHudWorkshop;
    
    UPROPERTY(Transient)
    UTresUIP_HudUx* m_pHudUx;
    
    UPROPERTY(Transient)
    UTresUIP_HudOlaf* m_HudOlaf;
    
    UPROPERTY(Transient)
    UTresUIP_HudSnowSlide* m_pHudSnowSlide;
    
    UPROPERTY(Transient)
    UTresUIP_HudShining* m_pHudShining;
    
    UPROPERTY(Transient)
    UTresUIP_HudLuxord* m_pHudLuxord;
    
    UPROPERTY(Transient)
    UTresUIP_HudXehanort* m_pHudXehanort;
    
    UPROPERTY(Transient)
    UTresUIP_HudRightKairiCounter* m_pKairiCounter;
    
    UPROPERTY(Transient)
    UTresUIP_HudLStickInput* m_pLStickInput;
    
    UPROPERTY(Transient)
    UTresUIP_HudKeyHole* m_pKeyHole;
    
    UPROPERTY(Transient)
    UTextureRenderTarget2D* m_NaviMapTexture;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* m_HPAlertAudio;
    
public:
    UTresCockpit();
};

