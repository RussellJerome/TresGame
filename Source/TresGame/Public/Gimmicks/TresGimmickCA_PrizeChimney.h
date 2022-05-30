#pragma once
#include "CoreMinimal.h"
#include "CAPrizeChimneyParam.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickCA_PrizeChimney.generated.h"

class ATresGimmickCA_PrizeChimneyGroup;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract, Config=Game)
class ATresGimmickCA_PrizeChimney : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ATresGimmickCA_PrizeChimneyGroup* m_GroupOwner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCAPrizeChimneyParam m_Parameter;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SmokeParticleAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SmokeFinishParticleAsset;
    
    UPROPERTY(EditAnywhere)
    FVector m_EffectOffset;
    
    UPROPERTY(EditAnywhere)
    FVector m_PrizeOffset;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_SmokeParticleComponent;
    
public:
    ATresGimmickCA_PrizeChimney();
    UFUNCTION(BlueprintCallable)
    bool TryActivateChimneyGimmick(bool bResetHitPoint);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void OnHitPointZero();
    
    UFUNCTION(BlueprintPure)
    bool IsHitPointZero() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActivatedGimmick() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHitPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateChimneyGimmick();
    
};

