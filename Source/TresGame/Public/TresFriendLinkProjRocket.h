#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresFriendLinkProjRocket.generated.h"

class UParticleSystem;
class AActor;

UCLASS(Abstract)
class ATresFriendLinkProjRocket : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fFadeOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FadeOutEffData;
    
protected:
    UPROPERTY()
    TWeakObjectPtr<AActor> m_pTargetPawn;
    
public:
    ATresFriendLinkProjRocket();
};

