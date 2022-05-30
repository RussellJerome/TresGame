#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGummiGraphicData.generated.h"

class USkeletalMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct FTresGummiGraphicData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USkeletalMesh* m_pSkeltalMesh;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_BaseColorTexture;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BaseColorTexUVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_EmissiveColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_EmissiveMaskChannel;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_EmissiveMaskTexture;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EmissiveMaskTexUVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EMS_AdjustColor;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EMS_SineMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EMS_SineMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EMS_SineSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EMS_UseColorTable;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_NormalTexture;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NormalTexUVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_AOTexture;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AOTexUVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_CT1_PaletteTexture;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CT2_PaletteNum;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_CT3_MaskTexture;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CT4_MaskTexUVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CT5_MaskTexUVTiling;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_CT_CustomColor;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CT_PaletteUse;
    
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
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_MaskTexture;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaskTexUVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_R1_ColorMulti;
    
    UPROPERTY(EditDefaultsOnly)
    float m_R2_Metallic;
    
    UPROPERTY(EditDefaultsOnly)
    float m_R3_Specular;
    
    UPROPERTY(EditDefaultsOnly)
    float m_R4_Roughness;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_R5_Emissive;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_R_MaskChannel_1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_R_NormalStrength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_R_PatternID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_R_UVTiling;
    
    UPROPERTY(EditDefaultsOnly)
    float m_R_UVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_G1_ColorMulti;
    
    UPROPERTY(EditDefaultsOnly)
    float m_G2_Metallic;
    
    UPROPERTY(EditDefaultsOnly)
    float m_G3_Specular;
    
    UPROPERTY(EditDefaultsOnly)
    float m_G4_Roughness;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_G5_Emissive;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_G_MaskChannel_1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_G_NormalStrength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_G_PatternID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_G_UVTiling;
    
    UPROPERTY(EditDefaultsOnly)
    float m_G_UVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_B1_ColorMulti;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B2_Metallic;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B3_Specular;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B4_Roughness;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_B5_Emissive;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_B_MaskChannel_1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B_NormalStrength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B_PatternID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B_UVTiling;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B_UVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_A1_ColorMulti;
    
    UPROPERTY(EditDefaultsOnly)
    float m_A2_Metallic;
    
    UPROPERTY(EditDefaultsOnly)
    float m_A3_Specular;
    
    UPROPERTY(EditDefaultsOnly)
    float m_A4_Roughness;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_A5_Emissive;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_A_MaskChannel_1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_A_NormalStrength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_A_PatternID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_A_UVTiling;
    
    UPROPERTY(EditDefaultsOnly)
    float m_A_UVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_LightAttenuationChannel;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_LightAttenuationTexture;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightAttenuationTexUVIndex;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateAxisX;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateAxisY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateAxisZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UVScrollSpeedU;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UVScrollSpeedV;
    
    TRESGAME_API FTresGummiGraphicData();
};

