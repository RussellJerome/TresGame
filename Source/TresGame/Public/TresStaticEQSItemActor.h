#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresStaticEQSItemActor.generated.h"

UCLASS()
class ATresStaticEQSItemActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FStringAssetReference QueryTemplate;
    
    UPROPERTY(VisibleAnywhere)
    float VoxelSize;
    
    UPROPERTY(VisibleAnywhere)
    float ItemOverlapSize;
    
    UPROPERTY(VisibleAnywhere)
    FBox Bounds;
    
    UPROPERTY(VisibleAnywhere)
    FIntVector VoxelNum;
    
    UPROPERTY()
    TArray<uint32> StaticEQSItemHashData;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FVector> GeneratedItemPos;
    
    UPROPERTY()
    TArray<uint8> StaticEQSItemBits;
    
    UPROPERTY(VisibleAnywhere)
    uint32 StaticEQSItemBitNum;
    
    UPROPERTY()
    TArray<uint32> StaticEQSItemSubBitsIndex;
    
    UPROPERTY()
    TArray<uint16> StaticEQSItemSubSplitPlane;
    
    UPROPERTY()
    TArray<uint8> StaticEQSItemSubBits;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    uint32 Version;
    
    ATresStaticEQSItemActor();
};

