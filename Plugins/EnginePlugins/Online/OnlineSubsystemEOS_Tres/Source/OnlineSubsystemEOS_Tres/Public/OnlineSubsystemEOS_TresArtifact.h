#pragma once
#include "CoreMinimal.h"
#include "OnlineSubsystemEOS_TresArtifact.generated.h"

USTRUCT(BlueprintType)
struct FOnlineSubsystemEOS_TresArtifact {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Name;
    
    UPROPERTY(EditAnywhere)
    FName m_Id;
    
    UPROPERTY(EditAnywhere)
    FName m_CatalogItemID;
    
    ONLINESUBSYSTEMEOS_TRES_API FOnlineSubsystemEOS_TresArtifact();
};

