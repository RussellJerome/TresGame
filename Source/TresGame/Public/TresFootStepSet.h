#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresFootStepSet.generated.h"

class UMaterialInterface;

UCLASS()
class UTresFootStepSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* m_WetnessDecalMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* m_DecalMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* m_MudDecalMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* m_SnowDecalMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* m_DefaultTrailMaterial;
    
    UTresFootStepSet();
};

