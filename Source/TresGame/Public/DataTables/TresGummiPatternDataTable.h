#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "TresGummiPatternDataTable.generated.h"

class UTexture2D;

USTRUCT()
struct FTresGummiPatternDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_PTN1_MaskTexture;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_PTN1_MaskTexture1_R_Color;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_PTN1_MaskTexture2_G_Color;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_PTN1_MaskTexture3_B_Color;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_PTN1_MaskTexture4_A_Color;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_PTN2_NormalTexture;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_PTN3_SetTexture;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PTN4_TexUVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PTN5_TexUVTiling;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PTN_MetalicToSpecular;
    
    TRESGAME_API FTresGummiPatternDataTable();
};

