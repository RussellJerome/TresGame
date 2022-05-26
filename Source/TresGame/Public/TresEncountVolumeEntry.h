#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresEncountVolumeEntry.generated.h"

class ATresEncountTroops;

USTRUCT(BlueprintType)
struct FTresEncountVolumeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> m_GroupNames;
    
    UPROPERTY(EditAnywhere)
    FVector m_StartOffset;
    
    UPROPERTY(EditAnywhere)
    FVector m_EndOffset;
    
    UPROPERTY(EditAnywhere)
    bool m_WorldOffsetZ;
    
    UPROPERTY(EditAnywhere)
    int32 m_TryCount;
    
    UPROPERTY(EditAnywhere)
    float m_EscapeDistance;
    
    UPROPERTY(EditAnywhere)
    int32 m_LotteryWeight;
    
    UPROPERTY(EditAnywhere)
    bool m_bSkipNextTime;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATresEncountTroops> m_Troops;
    
    UPROPERTY(Transient)
    FName m_InternalGroupName;
    
    TRESGAME_API FTresEncountVolumeEntry();
};

