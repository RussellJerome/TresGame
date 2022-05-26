#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresComNpcActionPoint.generated.h"

UCLASS()
class TRESGAME_API ATresComNpcActionPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_PointName;
    
    UPROPERTY(EditAnywhere)
    FName m_GroupName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_LinkPoints;
    
    ATresComNpcActionPoint();
};

