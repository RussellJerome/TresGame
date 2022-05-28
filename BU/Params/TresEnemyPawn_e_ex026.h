#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresCoopColorSmokeInfo.h"
#include "TresEnemyPawn_e_ex026.generated.h"

class ATresRailSlideActor;
class USQEX_ParticleAttachDataAsset;
class ATresVehiclePawnSmallAirplane;
class UParticleSystemComponent;
class UTresReactorComponent;

UCLASS()
class ATresEnemyPawn_e_ex026 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRailSlideActor> m_ColorSmokeRailSlideActor;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresVehiclePawnSmallAirplane> m_SmallAirPlainData;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresReactorComponent* m_Reactor;
    
    UPROPERTY(EditAnywhere)
    FTresCoopColorSmokeInfo ColorSmokeInfo[4];
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bAirFrightMission: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnCrashEffectTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DieBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RailLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RailDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RailTangentScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RideMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RideAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RideAccelDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RideAccelTime;
    
private:
    UPROPERTY()
    ATresRailSlideActor* m_PrevPutRailSlideActor;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ColorSmokeEffectCmp;
    
    UPROPERTY()
    ATresVehiclePawnSmallAirplane* m_SmallAirplane;
    
public:
    ATresEnemyPawn_e_ex026();
    UFUNCTION(BlueprintPure)
    bool IsRideRailSlideActor() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableLongStunned();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableImmediatelyShakeOff();
    
    UFUNCTION(BlueprintCallable)
    void BP_StartSpread();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBBDestination();
    
};

