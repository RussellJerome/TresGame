#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_bx903.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class UTresLockonTargetComponent;
class UTresBodyCollPrimitive;

UCLASS()
class ATresEnemyPawn_e_bx903 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* m_VoxelMeshParticle;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresLockonTargetComponent* m_MyLockonComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TArray<UTresBodyCollPrimitive*> m_BodyColls;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresBodyCollPrimitive* m_PunchCoreBodyColl;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_RootCollSize_Idle;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_RootCollSize_Punch;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_RootCollSize_SpinDrill;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_RootCollSize_Rush;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_ShineColor;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShineAllTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShineRelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShineOrderTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShineOrderRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShineOffOrderRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShineOffPunchFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShineOffArmSpinFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreEnterParticleAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreEndParticleAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreParticleAsset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_CubeBodyNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_RushEndShineNum;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> m_MapMoveLocationList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DamageReactionSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DamageReturnReactionSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BattleEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChangeCameraDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CameraDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InterTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_CenterMapLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BattleAreaOutSideDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FLPunchCoreBodyCollSize;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FLNormalCoreBodyCollSize;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_CoreDisplayParticleComp;
    
public:
    ATresEnemyPawn_e_bx903();
    UFUNCTION(BlueprintCallable)
    bool IsBattleAreaOutSide();
    
    UFUNCTION(BlueprintPure)
    float GetRushMotionBlendRate(FName AnimName) const;
    
    UFUNCTION(BlueprintCallable)
    float GetFriendLinkBodyCollSize();
    
};

