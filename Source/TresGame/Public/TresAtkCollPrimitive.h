#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresAtkCollPrimitive.generated.h"

class USoundBase;
class UCurveVector;
class UStaticMesh;
class UBodySetup;

UCLASS(Transient, ClassGroup=Custom, Within=TresAtkCollComponent, meta=(BlueprintSpawnableComponent))
class UTresAtkCollPrimitive : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, Transient)
    UStaticMesh* m_CollisionMesh;
    
    UPROPERTY(DuplicateTransient, Transient)
    UCurveVector* m_SizeVectorCurve;
    
    UPROPERTY(DuplicateTransient, Transient)
    UCurveVector* m_ScaleVectorCurve;
    
    UPROPERTY(DuplicateTransient, Transient)
    USoundBase* m_HitSE;
    
    UPROPERTY(DuplicateTransient, Transient)
    USoundBase* m_DefaultHitSE;
    
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* m_pBodySetup;
    
public:
    UTresAtkCollPrimitive();
};

