#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipRailSwitchInfo.h"
#include "TresGumiShipRailSwitchInfos.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipRailSwitchInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTresGumiShipRailSwitchInfo> m_Infos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_RailSwitchName;
    
    TRESGAME_API FTresGumiShipRailSwitchInfos();
};

