#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "TresPlayerStartInterface.h"
#include "TresPlayerStart.generated.h"

UCLASS()
class TRESGAME_API ATresPlayerStart : public APlayerStart, public ITresPlayerStartInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_DispMapName;
    
    UPROPERTY(EditAnywhere)
    bool m_AutoDispMapName;
    
    UPROPERTY(EditAnywhere)
    bool m_Enabled;
    
    UPROPERTY(EditAnywhere)
    bool m_IsAutoSave;
    
    UPROPERTY(EditAnywhere)
    FName m_NavMapDataTableKey;
    
    UPROPERTY(EditAnywhere)
    bool m_IsEnableNavMap;
    
    UPROPERTY(EditAnywhere)
    float m_SwitchNavMapTime;
    
public:
    ATresPlayerStart();
    
    // Fix for true pure virtual functions not being implemented
};

