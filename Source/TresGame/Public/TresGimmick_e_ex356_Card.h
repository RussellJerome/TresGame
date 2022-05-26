#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "ETresCommandKind.h"
#include "TresGimmick_e_ex356_Card.generated.h"

class USceneComponent;
class UTresReactorComponent;
class UTresLockonPriorityOverlapComponent_e_ex356;
class UParticleSystem;

UCLASS()
class ATresGimmick_e_ex356_Card : public ATresCharPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* MyTransformControl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresLockonPriorityOverlapComponent_e_ex356* MyLockonPriorityOverlap;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyBigDealReactorComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ExplodeAttackLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ExplodeAttackCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ExplodeAttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SmokeParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FieldOutCardSmokeParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ExplodeParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HideAndSeekExplodeParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HideAndSeekExplodeCardParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BigDealAttackCardMoveParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BigDealCardAuraParticleSystem;
    
public:
    ATresGimmick_e_ex356_Card();
private:
    UFUNCTION()
    void OnBigDealReactorDoCommand(ATresCharPawnBase* InCommandCauser, TEnumAsByte<ETresCommandKind> InCommandID, UTresReactorComponent* InReactorComponent);
    
};

