#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickCannonBell.generated.h"

class UTresBodyCollPrimitive;
class UParticleSystemComponent;
class ATresGimmickCannon;
class UTresLockonTargetComponent;

UCLASS(Config=Game)
class ATresGimmickCannonBell : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* m_pBellEffect;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresBodyCollPrimitive* m_pBodyCollPrimitive;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresLockonTargetComponent* m_pLockonTargetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_ShotNumMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ShotIntervalMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_CooldownMax;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ATresGimmickCannon>> m_wpTresGimmickCannons;
    
    UPROPERTY(Transient)
    int32 m_ShotNum;
    
    UPROPERTY(Transient)
    float m_shotInterval;
    
    UPROPERTY(Transient)
    float m_Cooldown;
    
    UPROPERTY(Transient)
    bool m_bShotRequest;
    
    UPROPERTY(Transient)
    bool m_bPreEnableBell;
    
public:
    ATresGimmickCannonBell();
};

