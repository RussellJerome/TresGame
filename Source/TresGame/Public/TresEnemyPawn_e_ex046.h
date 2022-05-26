#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "RegionParam_e_ex046.h"
#include "SaveInfo_e_ex046.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex046.generated.h"

class ATresEnemyRegionPawn_e_ex046;
class UParticleSystem;
class UTresStateBase;
class USQEX_ParticleAttachDataAsset;

UCLASS()
class ATresEnemyPawn_e_ex046 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_AppearRiseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearRiseEndHeight;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_MoveEffectAttachDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_RegionBreakEffect;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableMissionTick: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyRegionPawn_e_ex046> m_RegionPawnClass;
    
    UPROPERTY(EditDefaultsOnly)
    FRegionParam_e_ex046 m_RegionParams[3];
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_ModeChangeClass;
    
    UPROPERTY(SaveGame)
    FSaveInfo_e_ex046 m_SaveInfo;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> m_DebugBlizzardBreathClassFilePathList;
    
public:
    ATresEnemyPawn_e_ex046();
    UFUNCTION(BlueprintCallable)
    void SetAppearStateSpecial();
    
    UFUNCTION(BlueprintCallable)
    void PostAnimUpdate();
    
    UFUNCTION(BlueprintCallable)
    bool IsMissionFinishMode();
    
    UFUNCTION(BlueprintPure)
    bool IsLandMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFlyMode() const;
    
    UFUNCTION()
    bool IsAllRegionBreaked() const;
    
    UFUNCTION()
    int32 GetNumRegionBreak() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetMissionAimOffsetValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetMissionAimOffsetRate() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetLookAtRotation() const;
    
    UFUNCTION(BlueprintPure)
    float GetLookAtBoneRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastAttackElapsedTime() const;
    
    UFUNCTION(BlueprintPure)
    UClass* GetBlizzardBreathAttackDefinitionClass() const;
    
    UFUNCTION()
    void DebugSetMissionDrawDisplay(int32 bEnable);
    
    UFUNCTION()
    void DebugSetBlizzardBreathSplineNo(int32 NO);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetAlwaysRegionBreak();
    
    UFUNCTION(BlueprintCallable)
    void DebugResetAlwaysRegionBreak();
    
    UFUNCTION(BlueprintPure)
    bool CanAttack() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyMissionFinishMode(bool bFinishMode);
    
};

