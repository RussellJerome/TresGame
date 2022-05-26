#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityUserData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresLevelEntityUserData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UObject* m_UserObject;
    
    UPROPERTY(EditAnywhere)
    float m_UserParams[4];
    
    FTresLevelEntityUserData();
};

