#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresFootStepDecal.generated.h"

class UDecalComponent;
class UMaterialInterface;

UCLASS()
class ATresFootStepDecal : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UDecalComponent* m_Decal;
    
    ATresFootStepDecal();
    UFUNCTION(BlueprintCallable)
    void SetFootStepDecalMaterial(UMaterialInterface* NewDecalMaterial);
    
};

