#pragma once
#include "CoreMinimal.h"
#include "TresComNpcReplaceMeshData.generated.h"

class USkeletalMesh;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FTresComNpcReplaceMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USkeletalMesh* m_MeshData;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* m_MatData;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_VoiceType;
    
    TRESGAME_API FTresComNpcReplaceMeshData();
};

