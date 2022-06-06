#pragma once
#include "CoreMinimal.h"
#include "Components/SkinnedMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMeshComponentUpdateFlag -FallbackName=EMeshComponentUpdateFlag
#include "TresInterpGroupInstUpdateSettings.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresInterpGroupInstUpdateSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USkeletalMeshComponent* m_SkeletalMeshComponent;
    
    UPROPERTY()
    TEnumAsByte<EMeshComponentUpdateFlag::Type> m_UpdateFlag;
    
    UPROPERTY()
    bool m_UpdateRateOptimizations;
    
    FTresInterpGroupInstUpdateSettings();
};

