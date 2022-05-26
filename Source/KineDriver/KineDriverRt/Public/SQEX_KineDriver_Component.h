#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Engine/EngineBaseTypes.h"
#include "SQEX_KineDriver_Component.generated.h"

class USQEX_KineDriverData;
class USkeletalMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class KINEDRIVERRT_API USQEX_KineDriver_Component : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 KineDriverIndex;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<USQEX_KineDriverData*> KineDriverData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableScaleOpChildSSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETickingGroup> TickGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableFrustumCulling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableCheckDrawn;
    
private:
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    USQEX_KineDriver_Component();
    UFUNCTION(BlueprintCallable)
    void CopyFromSkeletalMeshAssetUserData();
    
};

