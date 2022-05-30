#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileRecipe.generated.h"

class UGFxObject;
class UTresASProxyTresControlsList;
class UTresASProxyTresControlsIcon;

UCLASS()
class UTresUIP_MobileRecipe : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxObject* m_Root;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsList* m_CuisineList;
    
    UPROPERTY(Transient)
    UGFxObject* m_ThumbnailAnimation;
    
    UPROPERTY(Transient)
    UTresASProxyTresControlsIcon* m_ThumbnailIcon;
    
    UPROPERTY(Transient)
    UGFxObject* m_SuccessCount;
    
    UPROPERTY(Transient)
    UGFxObject* m_GreatSuccessCount;
    
    UPROPERTY(Transient)
    UGFxObject* m_FoodSet[7];
    
    UPROPERTY(Transient)
    UGFxObject* m_FoodText[7];
    
public:
    UTresUIP_MobileRecipe();
};

