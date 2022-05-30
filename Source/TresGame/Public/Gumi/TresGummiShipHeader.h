#pragma once
#include "CoreMinimal.h"
#include "ETresItemDefGumiShipBP.h"
#include "TresGummiShipHeader.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiShipHeader {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_VerName;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_Name;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefGumiShipBP m_ItemID;
    
    UPROPERTY(EditDefaultsOnly)
    uint16 m_nTotalBaseGummiNum;
    
    UPROPERTY(EditDefaultsOnly)
    uint16 m_nTotalDecoGummiNum;
    
    TRESGAME_API FTresGummiShipHeader();
};

