#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipClusterInfo.generated.h"

class UStaticMesh;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresGumiShipClusterInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* AttachEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HP;
    
    TRESGAME_API FTresGumiShipClusterInfo();
};

