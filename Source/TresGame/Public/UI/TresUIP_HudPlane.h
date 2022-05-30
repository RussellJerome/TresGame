#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresHudPlaneTargetInfo.h"
#include "TresUIP_HudPlane.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_HudPlane : public UTresCockpitParts {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTresHudPlaneTargetInfo m_lockonInfo;
    
    UPROPERTY()
    FTresHudPlaneTargetInfo m_objectInfo;
    
private:
    UPROPERTY(Transient)
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxTargetMarkerMove;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxTargetMarker;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxLockonMarkerMove;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxEnemyLocMarkerMove;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxEnemyLocMarker;
    
    UPROPERTY(Transient)
    UGFxObject* m_pGFxArrow;
    
public:
    UTresUIP_HudPlane();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

