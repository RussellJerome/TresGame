#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPrimitiveComponentBase.h"
#include "Engine/EngineTypes.h"
#include "ETresGumiShipCollisionPriority.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipCollisionParam.h"
#include "TresGumiShipCollisionSetCompo.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipCollisionSetCompo : public UTresGumiShipPrimitiveComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<ETresGumiShipCollisionPriority> m_ePriority;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FTresGumiShipCollisionParam> m_Params;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bCollideOffWhenGenerated;
    
public:
    UTresGumiShipCollisionSetCompo();
protected:
    UFUNCTION()
    void _OnOverlapBegin(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
    UFUNCTION()
    void _OnHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
};

