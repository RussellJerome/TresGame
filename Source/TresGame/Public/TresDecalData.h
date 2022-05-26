#pragma once
#include "CoreMinimal.h"
#include "TresDecalData.generated.h"

class UMaterial;

USTRUCT(BlueprintType)
struct FTresDecalData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, NoClear)
    UMaterial* m_DecalMaterial;
    
    UPROPERTY(EditAnywhere, Export, NoClear)
    float m_DecalSize;
    
    UPROPERTY(EditAnywhere, Export, NoClear)
    float m_LifeSpan;
    
    UPROPERTY(EditAnywhere, Export, NoClear)
    float m_FadeinTime;
    
    UPROPERTY(EditAnywhere, Export, NoClear)
    float m_FadeoutTime;
    
    TRESGAME_API FTresDecalData();
};

