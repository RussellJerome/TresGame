#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "ETresWorldCode.h"
#include "TresWorldCodeLoadAssetName.generated.h"

USTRUCT(BlueprintType)
struct FTresWorldCodeLoadAssetName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<ETresWorldCode> m_WorldCode;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FStringAssetReference m_AssetName;
    
    TRESGAME_API FTresWorldCodeLoadAssetName();
};

