#pragma once
#include "CoreMinimal.h"
#include "TresLoadAsset.h"
#include "TresTaggedTextureSet.h"
#include "TresResidentTextures.generated.h"

class AActor;

UCLASS()
class TRESGAME_API UTresResidentTextures : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTresTaggedTextureSet> m_TaggedTextureSet;
    
    UPROPERTY(Transient)
    TArray<FName> m_CurrentResidentTags;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> m_CurrentResidentActors;
    
    UTresResidentTextures();
};

