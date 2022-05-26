#pragma once
#include "CoreMinimal.h"
#include "TresTsAwardData.generated.h"

USTRUCT(BlueprintType)
struct FTresTsAwardData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Key;
    
    UPROPERTY(EditAnywhere)
    FString m_DevelopName;
    
    UPROPERTY(Transient)
    bool m_IsGet;
    
    TRESGAME_API FTresTsAwardData();
};

