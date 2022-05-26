#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresProjectileManager.generated.h"

class ATresRailSlideActor;
class ATresProjectileBase;

UCLASS(NotPlaceable)
class ATresProjectileManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, Transient)
    TArray<ATresProjectileBase*> m_ProjectileList;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<ATresProjectileBase*> m_ResidueProjList;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<ATresRailSlideActor*> m_ResidueRailList;
    
public:
    ATresProjectileManager();
};

