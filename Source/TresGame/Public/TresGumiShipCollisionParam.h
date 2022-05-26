#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCollisionAttachParam.h"
#include "ETresGumiShipCollisionShape.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipCollisionSizeParam.h"
#include "TresGumiShipCollisionParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipCollisionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ETresGumiShipCollisionShape m_eShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector m_vScale;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTresGumiShipCollisionSizeParam m_SizeParam;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FTresGumiShipCollisionAttachParam m_AttachParam;
    
    TRESGAME_API FTresGumiShipCollisionParam();
};

