#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SQEX_KineDriver_AssetUserDataElement.generated.h"

class USQEX_KineDriverData;

USTRUCT(BlueprintType)
struct FSQEX_KineDriver_AssetUserDataElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 KineDriverIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USQEX_KineDriverData*> KineDriverData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableScaleOpChildSSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETickingGroup> TickGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableFrustumCulling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableCheckDrawn;
    
    KINEDRIVERRT_API FSQEX_KineDriver_AssetUserDataElement();
};

