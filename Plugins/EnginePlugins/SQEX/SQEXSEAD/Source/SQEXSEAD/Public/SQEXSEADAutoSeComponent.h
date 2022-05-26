#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SQEXSEADAutoSeComponent.generated.h"

class UPawnMovementComponent;
class USQEXSEADAutoSeComponentCallback;
class USQEXSEADAutoSeComponentSetting;
class USQEXSEADAutoSeComponentAssetTable;
class USQEXSEADAutoSeDetectionSetting;
class USkeletalMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADAutoSeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    USQEXSEADAutoSeComponentCallback* AutoSeCallback;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USQEXSEADAutoSeComponentSetting* SettingData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USQEXSEADAutoSeComponentAssetTable* AssetTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USQEXSEADAutoSeDetectionSetting* DetectionSetting;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bEnableClip: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bAlwaysMotionOnlyMode: 1;
    
private:
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* CachedMeshReference;
    
    UPROPERTY(Export, Transient)
    UPawnMovementComponent* CachedMovementComponent;
    
public:
    USQEXSEADAutoSeComponent();
};

