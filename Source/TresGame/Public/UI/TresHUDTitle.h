#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUDTitle.generated.h"

class UTresUIDataAsset;
class USoundBase;
class UTresUIP_Title;
class UTresUIP_Hologram;
class UTresUIManager;
class UTresUIP_SaveLoad;
class UAudioComponent;
class UTresUIP_InitialSetting;

UCLASS(NonTransient)
class ATresHUDTitle : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_TitleBGM;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_DemoMovieFile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DemoMovieWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TheaterMapName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_TutorialMapName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_MemoryArchiveMapName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_SlideShowMapName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_PhilharmonicMapName;
    
    UPROPERTY(EditDefaultsOnly)
    UTresUIDataAsset* m_UIDataAssetTitle;
    
    UPROPERTY(Transient)
    UTresUIP_Title* m_Title;
    
    UPROPERTY(Transient)
    UTresUIManager* m_UIManager;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* m_GameStartSE;
    
    UPROPERTY(Transient)
    UTresUIP_SaveLoad* m_LoadMenu;
    
    UPROPERTY(Transient)
    UTresUIP_Hologram* m_Hologram;
    
    UPROPERTY(Transient)
    UTresUIP_InitialSetting* m_IniSettings;
    
public:
    ATresHUDTitle();
};

