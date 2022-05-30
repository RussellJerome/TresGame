#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresGumiShipDestroyMovieClip.h"
#include "TresUIP_HudGummiShipScore.generated.h"

class UGFxObject;

UCLASS(NonTransient)
class UTresUIP_HudGummiShipScore : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_pRankAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pScoreNumSet;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTimeAnm;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDestroy;
    
    UPROPERTY(Transient)
    UGFxObject* m_pRank;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTime;
    
    UPROPERTY(Transient)
    UGFxObject* m_pDenominator;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTimeMinNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTimeSecNum;
    
    UPROPERTY(Transient)
    UGFxObject* m_pTimeMilNum;
    
    UPROPERTY(Transient)
    FTresGumiShipDestroyMovieClip m_pDestroyMC[3];
    
public:
    UTresUIP_HudGummiShipScore();
};

