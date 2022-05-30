#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILBCoopPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresDeathSentenceArmorRevengeParam_e_ex357.h"
#include "Engine/EngineTypes.h"
#include "ETresEnemyFieldSize_e_ex357.h"
#include "ETresDeathSentenceRemoteEventType_e_ex357.h"
#include "TresEnemyPawn_e_ex357.generated.h"

class USphereComponent;
class UPrimitiveComponent;
class UParticleSystem;
class UEnvQuery;
class AActor;
class UObject;

UCLASS()
class ATresEnemyPawn_e_ex357 : public ATresEnemyXIIILBCoopPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* MyPullCollisionComponent;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AuraParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WeaponAuraParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresDeathSentenceArmorRevengeParam_e_ex357> m_DeathSentenceArmorRevengeParamList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DeathSentenceCinematicCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DeathSentenceCinematicStartTransitionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DeathSentenceCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DeathSentenceStartTransitionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DeathSentenceEndTransitionTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableBitExistLockonLowPriority: 1;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_BitEnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BitEnvQueryRunIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FieldPenetrateCheckStartDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsFieldDieDestroy: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FieldDieDestroyDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsFieldDieImmediate: 1;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BloomShieldParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DeathSentenceCounterParticleSystem;
    
public:
    ATresEnemyPawn_e_ex357();
    UFUNCTION(BlueprintCallable)
    void SetDisableFieldLifeOver(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableFieldAttack(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableBitAttackUpdate(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableBitAttack(bool bDisable);
    
    UFUNCTION()
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    bool IsStartedDamageReactionAfterIdle() const;
    
    UFUNCTION()
    bool IsDeathSentence() const;
    
    UFUNCTION()
    int32 GetSmallFieldNum() const;
    
    UFUNCTION()
    int32 GetMediumFieldNum() const;
    
    UFUNCTION()
    int32 GetLargeFieldNum() const;
    
    UFUNCTION()
    int32 GetFieldNum() const;
    
    UFUNCTION()
    int32 GetFieldManagerNum() const;
    
    UFUNCTION(BlueprintPure)
    void GetFieldLocationsSize(TArray<FVector>& OutList, TEnumAsByte<ETresEnemyFieldSize_e_ex357::Type> InSizeType) const;
    
    UFUNCTION(BlueprintPure)
    void GetFieldLocationsIgnoreNearestSize(TArray<FVector>& OutList, TEnumAsByte<ETresEnemyFieldSize_e_ex357::Type> InSizeType) const;
    
    UFUNCTION(BlueprintPure)
    void GetFieldLocationsIgnoreNearest(TArray<FVector>& OutList) const;
    
    UFUNCTION(BlueprintPure)
    void GetFieldLocations(TArray<FVector>& OutList) const;
    
    UFUNCTION()
    float GetElapsedTimeSinceLastBitGenerate() const;
    
    UFUNCTION()
    int32 GetBitNum() const;
    
    UFUNCTION()
    int32 GetBitManagerNum() const;
    
    UFUNCTION(BlueprintPure)
    void GetBitLocationList(TArray<FVector>& OutList) const;
    
    UFUNCTION()
    bool GetAttackGuarded();
    
    UFUNCTION(Exec)
    void DebugSetPhantomBlitzQuickTurnaroundParamIndex(int32 Index);
    
    UFUNCTION(Exec)
    void DebugSetNumWarpCut(int32 Num);
    
    UFUNCTION(Exec)
    void DebugSetNumContinuityCut(int32 Num);
    
    UFUNCTION(Exec)
    void DebugSetEnableForceDeathSentenceApplyDispelCommand(int32 Enable);
    
    UFUNCTION(Exec)
    void DebugSetEnableFieldForceShortLife(int32 Enable);
    
    UFUNCTION(Exec)
    void DebugSetEnableDrawPullCollision(int32 Enable);
    
    UFUNCTION(Exec)
    void DebugSetEnableDrawFastMoveArcTargetLocation(int32 Enable);
    
    UFUNCTION(Exec)
    void DebugSetDeathSentenceStartCount(int32 InCount);
    
    UFUNCTION(Exec)
    void DebugSetDeathSentenceCountSpeed(float InSpeed);
    
    UFUNCTION(Exec)
    void DebugEnableBloomShield(int32 Enable);
    
    UFUNCTION(BlueprintCallable)
    static void DeathSentenceRemoteEventForLevelBP(UObject* WorldContextObject, TEnumAsByte<ETresDeathSentenceRemoteEventType_e_ex357> InRemoteType);
    
};

