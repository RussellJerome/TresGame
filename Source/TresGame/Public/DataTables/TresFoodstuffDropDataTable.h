#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresFoodstuffDropperID.h"
#include "ETresItemDefFoodstuff.h"
#include "TresFoodstuffDropDataTable.generated.h"

USTRUCT()
struct FTresFoodstuffDropDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int8 m_GenRate;
    
    UPROPERTY(EditDefaultsOnly)
    ETresFoodstuffDropperID m_BPType;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefFoodstuff m_Drop1ItemID;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop1Num;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop1Rate;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop1Level;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefFoodstuff m_Drop2ItemID;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop2Num;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop2Rate;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop2Level;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefFoodstuff m_Drop3ItemID;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop3Num;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop3Rate;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop3Level;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefFoodstuff m_Drop4ItemID;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop4Num;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop4Rate;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop4Level;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefFoodstuff m_Drop5ItemID;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop5Num;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop5Rate;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop5Level;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefFoodstuff m_Drop6ItemID;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop6Num;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop6Rate;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop6Level;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefFoodstuff m_Drop7ItemID;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop7Num;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop7Rate;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop7Level;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefFoodstuff m_Drop8ItemID;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop8Num;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop8Rate;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_Drop8Level;
    
    TRESGAME_API FTresFoodstuffDropDataTable();
};

