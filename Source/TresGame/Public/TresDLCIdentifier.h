#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresDLCIdentifier.generated.h"

USTRUCT()
struct FTresDLCIdentifier : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString strValueEU;
    
    UPROPERTY(EditAnywhere)
    FString strValueJP;
    
    UPROPERTY(EditAnywhere)
    FString strValueNA;
    
    UPROPERTY(EditAnywhere)
    FString strValueTW;
    
    UPROPERTY(EditAnywhere)
    bool m_HasData;
    
    UPROPERTY(EditAnywhere)
    FString m_MountName;
    
    TRESGAME_API FTresDLCIdentifier();
};

