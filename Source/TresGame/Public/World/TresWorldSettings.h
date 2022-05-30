#pragma once
#include "CoreMinimal.h"
#include "SQEX_WorldSettings.h"
#include "TresAttractionFlowDrawingInterface.h"
#include "ETresWorldCode.h"
#include "ETresWorldAreaCode.h"
#include "TresAttractionFlowDrawingEntry.h"
#include "ETresEffectAreaCode.h"
#include "TresWorldSettings.generated.h"

class UDataAsset;
class USoundBase;
class UTresWorldResidentActorClassAsset;
class UTresPhysMatEffectAsset;
class UDataTable;

UCLASS()
class TRESGAME_API ATresWorldSettings : public ASQEX_WorldSettings, public ITresAttractionFlowDrawingInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresWorldCode> m_WorldCode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresWorldAreaCode> m_WorldAreaCode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* m_BGMField;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* m_BGMBattle;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresAttractionFlowDrawingEntry> m_DrawingTable;
    
    UPROPERTY(EditAnywhere)
    bool m_AttractionFlowDrawingEnable;
    
    UPROPERTY(EditAnywhere)
    TArray<UDataAsset*> m_Assets;
    
    UPROPERTY(EditAnywhere)
    TArray<UTresWorldResidentActorClassAsset*> m_AssetMapsOnlyForLevel;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_LoadCommonAssetTags;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_DiscardCommonAssetTags;
    
    UPROPERTY(EditAnywhere)
    UTresPhysMatEffectAsset* m_PhysMatEffects;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresEffectAreaCode> m_EffectAreaCode;
    
    UPROPERTY(EditAnywhere)
    UDataTable* m_EffectBaseColorTable;
    
    ATresWorldSettings();
    
    // Fix for true pure virtual functions not being implemented
};

