#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "ETresSavePointDispType.h"
#include "TresGimmickRailSlideExStartActor.generated.h"

class USceneComponent;
class UParticleSystemComponent;
class UTresReactorComponent;
class UParticleSystem;

UCLASS(Abstract, Config=Game)
class ATresGimmickRailSlideExStartActor : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_EffectBodyComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_Effect_Body;
    
    ATresGimmickRailSlideExStartActor();
protected:
    UFUNCTION()
    void OnChangeRailSlideExStartActorDispType(ETresSavePointDispType InDispType);
    
};

