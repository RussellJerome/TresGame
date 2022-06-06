#pragma once
#include "CoreMinimal.h"
#include "ESQEX_BreakBlendMode.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Renderer -ObjectName=ESQEX_BreakBlendMode -FallbackName=ESQEX_BreakBlendMode
#include "TresEnemy_e_ex773_CrushingParam.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_CrushingParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_Comment;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* m_Material;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_Size;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AnimTime;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ESQEX_BreakBlendMode> m_Mode;
    
    TRESGAME_API FTresEnemy_e_ex773_CrushingParam();
};

