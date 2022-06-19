#pragma once
#include "CoreMinimal.h"
#include "TresWearformTextureReplaceData.h"
#include "TresWearformSetUnit.generated.h"

class UTresAnimSet;

USTRUCT(BlueprintType)
struct FTresWearformSetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_FormName;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bTextureReplace: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWearformTextureReplaceData> m_TextureReplaceData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UTresAnimSet*> m_ReplaceAnimSets;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bPlayFaceAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_PlayFaceAnimName;
    
    TRESGAME_API FTresWearformSetUnit();
};

