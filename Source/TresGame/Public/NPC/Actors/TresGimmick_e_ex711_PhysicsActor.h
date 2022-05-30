#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "ETresGimmick_e_ex711_PhysicsActorGimmickKind.h"
#include "ETresGimmick_e_ex711_PhysicsActorSizeKind.h"
#include "TresGimmick_e_ex711_PhysicsActor.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS()
class ATresGimmick_e_ex711_PhysicsActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_DestinationEffect;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresGimmick_e_ex711_PhysicsActorGimmickKind> m_pro_GimmickKind;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresGimmick_e_ex711_PhysicsActorSizeKind> m_pro_SizeKind;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_DestinationEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DisableDestinationEffectDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DestinationEffectScale;
    
public:
    ATresGimmick_e_ex711_PhysicsActor();
};

