#pragma once
#include "CoreMinimal.h"
#include "SQEX_KBDAssetElement.h"
#include "Engine/AssetUserData.h"
#include "SQEX_KBDAssetUserData.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class KBDRT_API USQEX_KBDAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSQEX_KBDAssetElement> AssetElements;
    
    USQEX_KBDAssetUserData();
};

