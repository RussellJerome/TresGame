#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ESQEX_FreeFlowKind.h"
#include "TresAIPawnBase.h"
#include "TresEnemyRetryVoiceData.h"
#include "ETresEnemyUniqueID.h"
#include "RevengeAttacks.h"
#include "ETresEnemyMajorUseID.h"
#include "TresEnemyPawnBase.generated.h"

class ATresEnemyPawnBase;
class UParticleSystemComponent;
class UTresEnemyCommonParam;
class USoundBase;
class USQEXSEADSoundReferenceEnumSet;
class UTresAIWeaponComponent;
class UObject;

UCLASS()
class TRESGAME_API ATresEnemyPawnBase : public ATresAIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ATresEnemyPawnBase* EnemyParent;
    
    UPROPERTY(Transient)
    TArray<ATresEnemyPawnBase*> EnemyChildren;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyUniqueID m_EnemyUniqueID;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ESQEX_FreeFlowKind m_FreeFlowKind;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AppearEffectGroupID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DieEffectGroupID;
    
    UPROPERTY(EditAnywhere)
    TArray<float> m_IdlingBreakWeights;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresEnemyCommonParam> m_EnemyCommonParam;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FRevengeAttacks> m_RevengeAttacks;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresEnemyPawnBase>> m_SpawnEnemyClasses;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableDieBodyPush: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyMajorUseID> m_eMajorUseID;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyRetryVoiceData> m_RetryVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_PlayerKilledVoiceData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USQEXSEADSoundReferenceEnumSet* m_SoundAssets_Damage;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool m_bStuckCheck;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bFallenAbyssCheck;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bRePopForStuckAndFallenAbyssCheck;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bWaterEnemy;
    
    UPROPERTY(Export, Transient)
    UTresAIWeaponComponent* m_AIWeaponComponent;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_SwirlUpEff;
    
public:
    UPROPERTY(EditDefaultsOnly)
    float m_YoBindMeshScaleRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WallHitIgnorePhysicsObjectMass;
    
    ATresEnemyPawnBase();
    UFUNCTION(BlueprintCallable)
    void SetStuckCheck(bool bEnable);
    
    UFUNCTION(BlueprintPure)
    bool IsWeaponAttacking() const;
    
    UFUNCTION()
    bool IsTargetPlayer() const;
    
    UFUNCTION()
    bool IsTargetGigas() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRevengeAttack() const;
    
    UFUNCTION(BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCoopMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetUserParam(int32 ParamIndex) const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetUserData() const;
    
    UFUNCTION(BlueprintPure)
    ETresEnemyUniqueID GetEnemyUniqueID() const;
    
    UFUNCTION(BlueprintPure)
    float GetAppearWait() const;
    
};

