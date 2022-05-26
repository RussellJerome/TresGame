#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "DEPRECATED_AnimNode_SQEX_Bonamik.generated.h"

class USQEX_BonamikAsset;

USTRUCT(BlueprintType)
struct BONAMIKRT_API FDEPRECATED_AnimNode_SQEX_Bonamik : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<USQEX_BonamikAsset*> BonamikAssets;
    
    FDEPRECATED_AnimNode_SQEX_Bonamik();
};

