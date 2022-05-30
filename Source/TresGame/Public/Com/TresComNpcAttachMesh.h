#pragma once
#include "CoreMinimal.h"
#include "TresComNpcAttachMesh.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcAttachMesh {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_MeshName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_SoketName;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bChangeMesh: 1;
    
    TRESGAME_API FTresComNpcAttachMesh();
};

