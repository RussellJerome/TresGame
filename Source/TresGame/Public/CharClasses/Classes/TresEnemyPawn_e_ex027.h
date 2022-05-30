#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex027.generated.h"

class UParticleSystem;
class AActor;
class UCurveFloat;
class UParticleSystemComponent;

UCLASS()
class ATresEnemyPawn_e_ex027 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> m_ProjectileGeneratorArray;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WheelRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UCurveFloat*> m_pro_WheelRotRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_PlayerBindReleaseEffData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_PlayerBindReleaseEff;
    
public:
    ATresEnemyPawn_e_ex027();
    UFUNCTION(BlueprintPure)
    float GetWheelRotAlpha() const;
    
    UFUNCTION(BlueprintPure)
    float GetWheelRot() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator GetSweepOutRot();
    
    UFUNCTION(BlueprintCallable)
    FVector GetSweepOutPos();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetDefaultPos();
    
};

