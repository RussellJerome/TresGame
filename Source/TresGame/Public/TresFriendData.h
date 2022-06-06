#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresFriendData.generated.h"

class UEnvQuery;
class UDataTable;

UCLASS()
class UTresFriendData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_FriendIdData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_FriendRelationData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_FriendHomePosData;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* WarpQuery;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* UnderwaterWarpQuery;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_FriendEvaluationData;
    
public:
    UTresFriendData();
};

