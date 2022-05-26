#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresDropItemID.h"
#include "TresTroopsRewards.generated.h"

USTRUCT()
struct FTresTroopsRewards : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_Prize1;
    
    UPROPERTY(EditAnywhere)
    FName m_Item1;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumPrize1;
    
    UPROPERTY(EditAnywhere)
    int32 m_PrizeRate1;
    
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_Prize2;
    
    UPROPERTY(EditAnywhere)
    FName m_Item2;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumPrize2;
    
    UPROPERTY(EditAnywhere)
    int32 m_PrizeRate2;
    
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_Prize3;
    
    UPROPERTY(EditAnywhere)
    FName m_Item3;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumPrize3;
    
    UPROPERTY(EditAnywhere)
    int32 m_PrizeRate3;
    
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_Prize4;
    
    UPROPERTY(EditAnywhere)
    FName m_Item4;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumPrize4;
    
    UPROPERTY(EditAnywhere)
    int32 m_PrizeRate4;
    
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_Prize5;
    
    UPROPERTY(EditAnywhere)
    FName m_Item5;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumPrize5;
    
    UPROPERTY(EditAnywhere)
    int32 m_PrizeRate5;
    
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_OnBoardPrize1;
    
    UPROPERTY(EditAnywhere)
    FName m_OnBoardItem1;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumOnBoardPrize1;
    
    UPROPERTY(EditAnywhere)
    int32 m_OnBoardPrizeRate1;
    
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_OnBoardPrize2;
    
    UPROPERTY(EditAnywhere)
    FName m_OnBoardItem2;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumOnBoardPrize2;
    
    UPROPERTY(EditAnywhere)
    int32 m_OnBoardPrizeRate2;
    
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_OnBoardPrize3;
    
    UPROPERTY(EditAnywhere)
    FName m_OnBoardItem3;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumOnBoardPrize3;
    
    UPROPERTY(EditAnywhere)
    int32 m_OnBoardPrizeRate3;
    
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_OnBoardPrize4;
    
    UPROPERTY(EditAnywhere)
    FName m_OnBoardItem4;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumOnBoardPrize4;
    
    UPROPERTY(EditAnywhere)
    int32 m_OnBoardPrizeRate4;
    
    UPROPERTY(EditAnywhere)
    FName m_OnBoardItem5;
    
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_OnBoardPrize5;
    
    UPROPERTY(EditAnywhere)
    int32 m_NumOnBoardPrize5;
    
    UPROPERTY(EditAnywhere)
    int32 m_OnBoardPrizeRate5;
    
    TRESGAME_API FTresTroopsRewards();
};

