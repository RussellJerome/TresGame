#pragma once
#include "CoreMinimal.h"
#include "TresRaDanceSplineOwner.generated.h"

class ATresCharPawnBase;
class UTresRaDanceSplineInterface;
class ITresRaDanceSplineInterface;

USTRUCT(BlueprintType)
struct FTresRaDanceSplineOwner {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ATresCharPawnBase> m_pOwner;
    
    UPROPERTY(EditAnywhere)
    TScriptInterface<ITresRaDanceSplineInterface> m_pSplineInterface;
    
    UPROPERTY(VisibleInstanceOnly)
    int32 m_nPrevArea;
    
    UPROPERTY(VisibleInstanceOnly)
    int32 m_nAreaGroupIndex;
    
    UPROPERTY(VisibleInstanceOnly)
    float m_fMoveSpeed;
    
    UPROPERTY(VisibleInstanceOnly)
    float m_fTurnSpeed;
    
    UPROPERTY(VisibleInstanceOnly)
    bool m_bSelect;
    
    TRESGAME_API FTresRaDanceSplineOwner();
};

