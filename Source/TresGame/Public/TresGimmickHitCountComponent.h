#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "TresGimmickHitCountComponentOnTresAccumulationRecoverSignatureDelegate.h"
#include "ETresGimmickHitCountComponentDamageProfile.h"
#include "ETresGimmickHitCountComponentType.h"
#include "ETresDamageKind.h"
#include "TresGimmickHitCountComponentOnTresTakeDamageGimmickSignatureDelegate.h"
#include "ETresChrUniqueID.h"
#include "ETresEnemyUniqueID.h"
#include "ETresDamageAttribute.h"
#include "ETresGimmickHitCountComponentTeam.h"
#include "TresGimmickHitCountComponentOnTresDestroyedGimmickSignatureDelegate.h"
#include "TresGimmickHitCountComponentOnTresAccumulationRecoveringSignatureDelegate.h"
#include "TresGimmickHitCountComponentOnTresAccumulationRecoveryedSignatureDelegate.h"
#include "Engine/EngineTypes.h"
#include "TresDamageInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickHitCountComponent.generated.h"

class AActor;
class UParticleSystem;
class AController;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickHitCountComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresGimmickHitCountComponentDamageProfile m_DamageProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresGimmickHitCountComponentType m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_HitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bDestroyedStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AccumulationReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AccumulationRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEnableDestroyByFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DestroyByFinishLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEnableDamageByFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEnableTakeDamageInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TakeDamageInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bBindTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bBindHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bAutoReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bAutoCallDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bCheckKillAttack;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FName m_ApplyBodyGrpName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresChrUniqueID> m_ApplyDamageChrUniqueIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresEnemyUniqueID> m_ApplyDamageEnemyUniqueIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<ETresDamageKind>> m_ApplyDamageKinds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresDamageAttribute> m_ApplyDamageAttribute;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<ETresGimmickHitCountComponentTeam> m_ApplyTeam;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<TSubclassOf<AActor>> m_ApplyDamageClass;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FName> m_ApplyAttackDataID;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool m_IgnoreDamageFriends;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool m_IgnoreDisneyMagic;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool m_IgnoreAttractionFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETresChrUniqueID> m_IgnoreDamageChrUniqueIDs;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<ETresGimmickHitCountComponentTeam> m_IgnoreTeam;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FName> m_IgnoreAttackDataID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_Effect_Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEnableBlowDeath;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickHitCountComponentOnTresTakeDamageGimmickSignature OnTresTakeDamageGimmick;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickHitCountComponentOnTresDestroyedGimmickSignature OnTresDestroyedGimmick;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickHitCountComponentOnTresAccumulationRecoverSignature OnTresAccumulationRecover;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickHitCountComponentOnTresAccumulationRecoveringSignature OnTresAccumulationRecovering;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickHitCountComponentOnTresAccumulationRecoveryedSignature OnTresAccumulationRecoveryed;
    
    UTresGimmickHitCountComponent();
protected:
    UFUNCTION()
    void OnTresTakeDamageOwner(float DamagePoint, AController* InstigatedBy, const FHitResult& HitInfo, const FTresDamageInfo& DamageInfo, FVector ShotFromDirection, AActor* DamageCauser);
    
    UFUNCTION()
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnTresTakeDamageGimmick(const FHitResult& HitInfo, AActor* DamageCauser);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnTresDestroyedGimmick(AActor* DamageCauser);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnTresAccumulationRecoveryed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnTresAccumulationRecovering(int32 HitCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnTresAccumulationRecover();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMaxHitCount(int32 count, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetHitCount(int32 count);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEnableHitCount(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetDamageProfile(ETresGimmickHitCountComponentDamageProfile damageProfile);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetDamage(int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    void BP_Reset();
    
    UFUNCTION(BlueprintPure)
    bool BP_IsDestroyed() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_IsDestroyDamage() const;
    
    UFUNCTION(BlueprintPure)
    int32 BP_GetMaxHitCount() const;
    
    UFUNCTION(BlueprintPure)
    FTresDamageInfo BP_GetLastTresDamageInfo() const;
    
    UFUNCTION(BlueprintPure)
    FHitResult BP_GetLastHitResult() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetHitCountRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 BP_GetHitCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 BP_GetDamage() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ForceDestroy(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void BP_ApplyDamage(AActor* DamageCauser);
    
};

