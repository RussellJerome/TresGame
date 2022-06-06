#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipPrizeDataTable.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresGumiShipPrizeDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RotatoSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fInitSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSuctionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LoopSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LoopStartLengs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LoopSuction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fRevivalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fRevivalWaitTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_min_size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSizeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* m_SoundAssets;
    
    TRESGAME_API FTresGumiShipPrizeDataTable();
};

