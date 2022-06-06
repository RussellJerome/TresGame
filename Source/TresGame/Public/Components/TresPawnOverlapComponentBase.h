#pragma once
#include "CoreMinimal.h"
#include "TresGimmickComponentBase.h"
#include "Engine/EngineTypes.h"
#include "TresCollShapeAssetUnit.h"
#include "TresPawnOverlapComponentBase.generated.h"

class ATresCharPawnBase;
class UBodySetup;
class UPrimitiveComponent;
class AActor;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPawnOverlapComponentBase : public UTresGimmickComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresCollShapeAssetUnit> m_CollisionShapesSrc;
    
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* m_pBodySetup;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<TWeakObjectPtr<ATresCharPawnBase>> m_OverlapList;
    
public:
    UTresPawnOverlapComponentBase();
protected:
    UFUNCTION()
    void OnBodyEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBodyBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

