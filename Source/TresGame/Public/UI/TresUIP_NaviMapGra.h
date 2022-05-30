#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUINaviMapMarkerData.h"
#include "TresUIP_NaviMapGra.generated.h"

class UGFxObject;
class UTexture;

UCLASS()
class UTresUIP_NaviMapGra : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_MarkerPc;
    
    UPROPERTY(Transient)
    UGFxObject* m_MarkerPcStart;
    
    UPROPERTY(Transient)
    UGFxObject* m_Map;
    
    UPROPERTY(Transient)
    UGFxObject* m_MapCanvas;
    
    UPROPERTY(Transient)
    UGFxObject* m_MapCanvasFade;
    
    UPROPERTY(Transient)
    UTexture* m_LoadedAsyncTexture;
    
    UPROPERTY(Transient)
    TMap<int32, FTresUINaviMapMarkerData> m_Markers;
    
public:
    UTresUIP_NaviMapGra();
};

