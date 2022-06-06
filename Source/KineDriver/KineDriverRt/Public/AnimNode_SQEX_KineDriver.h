#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "AnimNode_SQEX_KineDriver.generated.h"

class USQEX_KineDriverData;

USTRUCT(BlueprintType)
struct KINEDRIVERRT_API FAnimNode_SQEX_KineDriver : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 KineDriverIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USQEX_KineDriverData*> KineDriverData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableScaleOpChildSSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableCheckDrawn;
    
    FAnimNode_SQEX_KineDriver();
};

