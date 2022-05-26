#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "TresGummiMaterialDataTable.generated.h"

class UMaterialInstance;
class UTexture2D;

USTRUCT()
struct FTresGummiMaterialDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UMaterialInstance* m_MaterialInstance_Base;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInstance* m_MaterialInstance_Deco;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_CT1_PaletteTexture;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CT2_PaletteNum;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_CT3_MaskTexture_Base;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_CT3_MaskTexture_Deco;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CT4_MaskTexUVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CT5_MaskTexUVTiling;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_CT_CustomColor;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CT_PaletteUse;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isPattern;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isSticker;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isColorChange;
    
    TRESGAME_API FTresGummiMaterialDataTable();
};

