#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADANPlayAutoSeSourceType.h"
#include "ESQEXSEADAutoSePartsType.h"
#include "ESQEXSEADAutoSeMotionSoundType.h"
#include "SQEXSEADAnimNotifyPlayAutoSeParams.generated.h"

class USQEXSEADSurfaceAssetReferenceTable;

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAnimNotifyPlayAutoSeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESQEXSEADANPlayAutoSeSourceType::Type> SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESQEXSEADAutoSeMotionSoundType::Type> MotionSoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USQEXSEADSurfaceAssetReferenceTable* SurfaceAssetPathTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SurfaceAssetTableRecordName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESQEXSEADAutoSePartsType::Type> AutoSePartsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 AutoSePartsIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCheckIsGrounded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAttachToParts: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoundVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SoundPitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bFollowOwnerVisible: 1;
    
    FSQEXSEADAnimNotifyPlayAutoSeParams();
};

