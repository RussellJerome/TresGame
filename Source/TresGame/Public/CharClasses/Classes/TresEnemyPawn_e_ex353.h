#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyXIIILEPawnBase.h"
#include "TresEx353HitEffectInfo.h"
#include "TresEx353HitEffectManager.h"
#include "TresEx353EveryDirectionShotReserveWorker.h"
#include "ETresEnemyEx353ThornWildDanceEvent.h"
#include "ETresStateID.h"
#include "TresEnemyPawn_e_ex353.generated.h"

class ATresProjectileBase;
class ATresStaticMesh_e_ex353_Shield;
class UTresProjectileManager_e_ex353_ThornBeam;
class UParticleSystem;
class UParticleSystemComponent;
class USQEX_ParticleAttachDataAsset;
class USoundBase;
class UObject;
class AActor;

UCLASS()
class ATresEnemyPawn_e_ex353 : public ATresEnemyXIIILEPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTresEx353HitEffectInfo m_HitEffectInfos[2];
    
    UPROPERTY()
    TArray<FTresEx353HitEffectManager> m_HitEffectManager;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresProjectileManager_e_ex353_ThornBeam* m_ThornBeamManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresStaticMesh_e_ex353_Shield> m_ShieldActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ThornWildDanceDarkAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ThornWildDanceFlushAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EveryDirectionShotAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_LaserShotProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_LaserShotIgnoreGuardProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_LaserShotMissProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsEveryDirectionShotAfterSpawnStunProjectile: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_StunProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_EveryDirectionShotRotateSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EveryDirectionShotDeployDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnStunProjectileTime;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ThornWildDanceDarkCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_EveryDirectionShotEffectCmp;
    
    UPROPERTY()
    TArray<FTresEx353EveryDirectionShotReserveWorker> m_EveryDirectionShotReserveWorkerList;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_Ex353EffectDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_DeadEndStartVoiceList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_DeadEndFinishVoiceList;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_SpawnShieldVoice;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NextPlayVoiceSpawnShieldTime;
    
    ATresEnemyPawn_e_ex353();
    UFUNCTION(BlueprintCallable)
    static void ThornWildDanceSendEvent(UObject* WorldContextObject, ETresEnemyEx353ThornWildDanceEvent EventType);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDebugFnishBlow(bool bEnable);
    
    UFUNCTION()
    void OnDtorStateCallBack(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    void OnCtorStateCallBack(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    bool IsThornBeamMoveShield();
    
    UFUNCTION()
    bool IsThornBeamLoopCancel();
    
    UFUNCTION()
    bool IsHitAerialComboAttack();
    
    UFUNCTION()
    bool IsDuringThornWildDance();
    
    UFUNCTION()
    bool IsDebugFnishBlow();
    
    UFUNCTION()
    int32 GetShieldNum();
    
    UFUNCTION(BlueprintCallable)
    void GetShieldList(TArray<AActor*>& OutList);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetCenterActor();
    
    UFUNCTION()
    bool GetAttackGuarded();
    
    UFUNCTION(BlueprintCallable)
    void BP_FinishThornWildDance();
    
    UFUNCTION(BlueprintCallable)
    void BP_EndHandCharging();
    
};

