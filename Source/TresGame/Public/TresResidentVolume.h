#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "TresResidentVolume.generated.h"

class UObject;

UCLASS()
class ATresResidentVolume : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    TArray<FStringAssetReference> m_AssetArray;
    
    UPROPERTY(Transient)
    TArray<UObject*> m_AssetObjects;
    
public:
    ATresResidentVolume();
};

