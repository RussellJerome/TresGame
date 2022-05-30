#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipCollisionAttachParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipCollisionAttachParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_SocketNameBase;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector m_vOffsetBase;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_SocketNameDest;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector m_vOffsetDest;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FRotator m_Rotate;
    
    TRESGAME_API FTresGumiShipCollisionAttachParam();
};

