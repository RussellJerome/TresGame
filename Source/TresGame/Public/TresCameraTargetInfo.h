#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraTargetInfo.generated.h"

class UTresLockonTargetComponent;
class AActor;

USTRUCT(BlueprintType)
struct FTresCameraTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_TargetOffset;
    
    UPROPERTY(EditAnywhere)
    FVector m_TargetLocalOffset;
    
    UPROPERTY(Transient)
    AActor* m_TargetActor;
    
    UPROPERTY(Export, Transient)
    UTresLockonTargetComponent* m_TargetComp;
    
    TRESGAME_API FTresCameraTargetInfo();
};

