#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Pause.generated.h"

class UTresUIP_PauseButton;
class UGFxObject;
class UTresUIP_GameOver;

UCLASS()
class UTresUIP_Pause : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGFxObject* m_PauseRoot;
    
    UPROPERTY()
    UGFxObject* m_PauseTitle;
    
    UPROPERTY()
    UGFxObject* m_PauseHint;
    
    UPROPERTY()
    UGFxObject* m_PauseHintText;
    
    UPROPERTY()
    UGFxObject* m_PauseButtonSet;
    
    UPROPERTY()
    UTresUIP_PauseButton* m_PauseButton[6];
    
    UPROPERTY()
    UGFxObject* m_PauseBG;
    
    UPROPERTY()
    UTresUIP_GameOver* m_GameOver;
    
public:
    UTresUIP_Pause();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

