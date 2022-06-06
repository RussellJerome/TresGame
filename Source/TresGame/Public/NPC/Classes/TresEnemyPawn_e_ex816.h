#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyToyPawnBase.h"
#include "EyeLookAtWork_e_ex816.h"
#include "UObject/NoExportTypes.h"
#include "BonePhysicsBlendRateDataList_e_ex816.h"
#include "ETresPlayerSpecificActionID.h"
#include "UObject/NoExportTypes.h"
#include "ETresEnemyEyeType_e_ex816.h"
#include "TresEnemyPawn_e_ex816.generated.h"

class UTresAction1_e_ex816_Down;
class AActor;

UCLASS()
class ATresEnemyPawn_e_ex816 : public ATresEnemyToyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAction1_e_ex816_Down> m_DownActionClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverrideNavAgentHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnPointAvoidRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_SpawnPointAvoidOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DefaultPhysicsBlendRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DownPhysicsBlendRate;
    
    UPROPERTY(EditDefaultsOnly)
    FEyeLookAtWork_e_ex816 m_EyeLookAtWorks[2];
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FBonePhysicsBlendRateDataList_e_ex816> m_BonePhysicsBlendRateDataList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowPhysicsRate;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnablePhysicsAddImpluseAttackHit: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackHitPhysicsAddImpluse;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnablePhysicsAddImpluseDamage: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DamagePhysicsAddImpluse;
    
public:
    UPROPERTY(EditInstanceOnly)
    AActor* m_DebugStampTargetActor;
    
    ATresEnemyPawn_e_ex816();
    UFUNCTION(BlueprintCallable)
    void SetPhysicsBodyBlendRate(float InRate, float InterpTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetPhysicsBodyBlendRate(float InterpTime);
    
    UFUNCTION()
    void OnPlayerSpecificAction(TEnumAsByte<ETresPlayerSpecificActionID> InActionID, int32 InSubID);
    
    UFUNCTION(BlueprintPure)
    bool IsDowned() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetLookAtBoneRot(TEnumAsByte<ETresEnemyEyeType_e_ex816> InEyeType) const;
    
    UFUNCTION(Exec)
    void DebugSetPhysicsBodyBlendRate(float InRate);
    
    UFUNCTION(Exec)
    void DebugSetDownState();
    
    UFUNCTION(Exec)
    void DebugSetBonePhysicsBlendRate(int32 InIndex);
    
    UFUNCTION(Exec)
    void DebugResetPhysicsBodyBlendRate();
    
    UFUNCTION(Exec)
    void DebugResetBonePhysicsBlendRate();
    
    UFUNCTION(Exec)
    void DebugEndDownState();
    
};

