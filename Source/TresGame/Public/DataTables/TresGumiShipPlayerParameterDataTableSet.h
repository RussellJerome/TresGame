#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "TresGumiShipPlayerParameterDataTableSet.generated.h"

class UDataTable;
class UTresPlayerStateEvent;
class ATresCameraHoldCamera;
class UForceFeedbackEffect;

UCLASS()
class UTresGumiShipPlayerParameterDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pBaseParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pStrikeGumiDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UTresPlayerStateEvent>> m_PlayerStateEventCamera;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraHoldCamera> m_SmartphoneCamera;
    
    UPROPERTY(EditDefaultsOnly)
    UForceFeedbackEffect* m_pForceFeedBackForGameOver;
    
    UTresGumiShipPlayerParameterDataTableSet();
};

