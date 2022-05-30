#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresGumiShipMultiItemMovieClip.h"
#include "TresUIP_HudGummiShipMultiItemGet.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipMultiItemGet : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipResultItemFinish);
    
    UPROPERTY(BlueprintAssignable)
    FTresGumiShipResultItemFinish OnResultItemFinishDispather;
    
private:
    UPROPERTY(Transient)
    UGFxObject* m_pMultiItemGetMes;
    
    UPROPERTY(Transient)
    UGFxObject* m_pFrameAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pFrame;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBaseAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBaseEff;
    
    UPROPERTY(Transient)
    UGFxObject* m_pBase;
    
    UPROPERTY(Transient)
    UGFxObject* m_pMesIcon;
    
    UPROPERTY(Transient)
    FTresGumiShipMultiItemMovieClip m_pItemDatas[3];
    
public:
    UTresUIP_HudGummiShipMultiItemGet();
};

