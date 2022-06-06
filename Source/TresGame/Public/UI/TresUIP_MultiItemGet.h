#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MultiItemGet_ItemText.h"
#include "TresUIP_MultiItemGet.generated.h"

class UGFxObject;

UCLASS()
class UTresUIP_MultiItemGet : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_RootMain;
    
    UPROPERTY(Transient)
    UGFxObject* m_Window;
    
    UPROPERTY(Transient)
    UGFxObject* m_TextArea;
    
    UPROPERTY(Transient)
    UGFxObject* m_Icon;
    
    UPROPERTY(Transient)
    FTresUIP_MultiItemGet_ItemText m_ItemTexts[5];
    
public:
    UTresUIP_MultiItemGet();
    UFUNCTION()
    int32 OnCallback(int32 ID, int32 Param);
    
};

