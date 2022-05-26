#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresEnemyEEX773_POINT_KIND.h"
#include "TresActor_e_ex773_Point.generated.h"

class USceneComponent;

UCLASS()
class ATresActor_e_ex773_Point : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ETresEnemyEEX773_POINT_KIND m_PointKind;
    
    UPROPERTY(EditAnywhere)
    int32 m_PointNo;
    
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* MyRoot;
    
    ATresActor_e_ex773_Point();
};

