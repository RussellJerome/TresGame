#pragma once
#include "CoreMinimal.h"
#include "TresPhotoHologramEffectInstance.generated.h"

class ATresPhotoHologramActor;
class UParticleSystemComponent;

USTRUCT()
struct FTresPhotoHologramEffectInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TArray<UParticleSystemComponent*> m_pPSCList;
    
    UPROPERTY()
    TWeakObjectPtr<ATresPhotoHologramActor> m_pOwner;
    
public:
    TRESGAME_API FTresPhotoHologramEffectInstance();
};

