#pragma once
#include "CoreMinimal.h"
#include "TresWearformSetUnit.h"
#include "Engine/DataAsset.h"
#include "TresWearformSet.generated.h"

UCLASS(BlueprintType)
class UTresWearformSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FTresWearformSetUnit m_Forms[11];
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 m_bEnableColorChange: 1;
    
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ColorChangeMaterials;
    
public:
    UTresWearformSet();
};

