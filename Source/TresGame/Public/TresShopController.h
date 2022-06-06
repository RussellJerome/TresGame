#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresShopController.generated.h"

class UTresUIManager;
class UTresUIP_Shop;
class USoundBase;
class UTresUIP_Subtitle;
class ATresUIActor;
class UPackage;
class UTresUIGumiPartsDataAsset;

UCLASS()
class UTresShopController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresUIManager* m_UIManager;
    
    UPROPERTY(Transient)
    UTresUIP_Shop* m_Shop;
    
    UPROPERTY(Transient)
    UTresUIP_Subtitle* m_Subtitle;
    
    UPROPERTY(Transient)
    ATresUIActor* m_UIActor;
    
    UPROPERTY(Transient)
    USoundBase* m_VoiceAsset;
    
    UPROPERTY(Transient)
    UPackage* m_LoadedActorPackage;
    
    UPROPERTY(Transient)
    UTresUIGumiPartsDataAsset* m_GumiPartsData;
    
public:
    UTresShopController();
};

