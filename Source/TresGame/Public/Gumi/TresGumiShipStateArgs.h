#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipStateArgs.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipStateArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_dArg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fArg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_vArg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_RotArg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bArg;
    
    TRESGAME_API FTresGumiShipStateArgs();
};

