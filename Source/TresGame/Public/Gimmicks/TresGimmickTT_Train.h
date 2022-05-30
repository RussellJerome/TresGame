#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresGimmickStaticBase.h"
#include "TresGimmickTT_Train.generated.h"

class AActor;
class UTresSplineMoverComponent;
class UBoxComponent;
class ASQEX_SplineActor;
class UPrimitiveComponent;

UCLASS(Abstract, Config=Game)
class ATresGimmickTT_Train : public ATresGimmickStaticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComp;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSplineMoverComponent* SplineComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ASQEX_SplineActor* m_SplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MoveInterpSpeed;
    
    ATresGimmickTT_Train();
protected:
    UFUNCTION()
    void OnComponentEndOverlapCallback(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnComponentBeginOverlapCallback(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

