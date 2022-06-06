#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresDecoPartsUnit.generated.h"

class UTresDecoPartsComponent;
class UTexture2D;

USTRUCT(BlueprintType)
struct FTresDecoPartsUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_attachSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresDecoPartsComponent> m_Asset;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ColorChangeMaterialName;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* m_ColorChangePointTexture;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_ChangePatternColor1;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_ChangePatternColor2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GradePow;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_3Color_Top;
    
    UPROPERTY(EditDefaultsOnly)
    float m_3ColorModeMode;
    
    UPROPERTY(EditDefaultsOnly)
    float m_halfUVTil_VMove;
    
    UPROPERTY(EditDefaultsOnly)
    float m_halfUVTilingMode;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LeatherMode;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MeshTypeModeChange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveMeshArea;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveNoMeshVisMaskArea;
    
    TRESGAME_API FTresDecoPartsUnit();
};

