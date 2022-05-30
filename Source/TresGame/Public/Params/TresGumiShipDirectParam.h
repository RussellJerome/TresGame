#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipDirectParam.generated.h"

class UParticleSystem;
class UTresCameraShake;

USTRUCT(BlueprintType)
struct FTresGumiShipDirectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UParticleSystem* m_pScudEffctType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector m_vEffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UTresCameraShake> m_pShakeType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bRebuildWhenDirect;
    
    TRESGAME_API FTresGumiShipDirectParam();
};

