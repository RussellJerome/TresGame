#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresPawnBase.h"
#include "TresGimmick_e_ex307_Card.generated.h"

class USceneComponent;
class UTresSkeletalMeshComponent;
class ATresProjectileBase;
class UParticleSystem;

UCLASS()
class ATresGimmick_e_ex307_Card : public ATresPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* MyTransformControl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_DummySpawnProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SmokeParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HintParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HintEffectOffsetDistance;
    
public:
    ATresGimmick_e_ex307_Card();
};

