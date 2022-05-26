#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipSplineAdditionalData.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemyMoveRouteSpline.generated.h"

class USplineComponent;

UCLASS()
class ATresGumiShipEnemyMoveRouteSpline : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineComponent* m_pEnemyMoveRouteSpline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTresGumiShipSplineAdditionalData> m_AdditionalData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_vRailShootingRouteAttachOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator m_RailShootingRouteAttachRotation;
    
public:
    ATresGumiShipEnemyMoveRouteSpline();
};

