#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemyPartsBase.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipEnemy623Parts.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(Abstract)
class ATresGumiShipEnemy623Parts : public ATresGumiShipEnemyPartsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DockID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TriggerTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ResurrectionTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RadiusT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngSpeedT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TriangleInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RadiusL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngSpeedL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RadiusS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngSpeedS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RadiusA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OmegaA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RateA;
    
    ATresGumiShipEnemy623Parts();
protected:
    UFUNCTION()
    void OnHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
};

