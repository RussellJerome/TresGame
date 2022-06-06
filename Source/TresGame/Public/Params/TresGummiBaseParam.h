#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGummiBaseParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTresGummiBaseParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_nCost;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nHP;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nPower;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nRoll;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nAttack;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_nTurn;
    
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
    bool m_isFlip;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isPattern;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isSticker;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isColorChange;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isAnim;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_isUVAnim;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPreviewScale;
    
    TRESGAME_API FTresGummiBaseParam();
};

