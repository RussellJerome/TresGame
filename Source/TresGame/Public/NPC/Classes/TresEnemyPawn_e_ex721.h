#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresThornWavingDummyMeshAttachInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex721.generated.h"

class ATresSkeletalMesh_e_ex721_WoodsJail;
class AActor;
class ATresSkeletalMesh_e_ex721_ThornWavingDummyActor;
class ATresActorManager_e_ex725;
class ATresProjectileBase;
class USQEX_ParticleAttachDataAsset;
class ATresAIPoint_e_ex721_WarpDestination;

UCLASS()
class ATresEnemyPawn_e_ex721 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresSkeletalMesh_e_ex721_WoodsJail> m_WoodsJailAsset;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float m_AddTowerYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TowerOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TowerLimitLockOnRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TowerOffLockOnRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SendDarkSceneEventTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SendBrightSceneEventTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DoReturnNormalModePearsentHP;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitEyeRotateSpeed;
    
public:
    UPROPERTY(EditInstanceOnly)
    AActor* m_LandScapeActor;
    
    UPROPERTY(EditInstanceOnly)
    AActor* m_TowerActor;
    
    UPROPERTY()
    TArray<ATresSkeletalMesh_e_ex721_WoodsJail*> m_WoodsJails;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ThornChainMaxNum;
    
    UPROPERTY()
    ATresActorManager_e_ex725* m_ThornChainManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresSkeletalMesh_e_ex721_ThornWavingDummyActor> m_ThornWavingDummyMeshAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FTresThornWavingDummyMeshAttachInfo m_ThornWavingDummyMeshAttachInfo[4];
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BlowProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_TossProjectileAsset;
    
    UPROPERTY()
    ATresSkeletalMesh_e_ex721_ThornWavingDummyActor* m_ThornWavingDummyMeshActors[4];
    
    UPROPERTY()
    ATresAIPoint_e_ex721_WarpDestination* m_WarpDestination;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_CallBombProjectile;
    
    ATresEnemyPawn_e_ex721();
    UFUNCTION(BlueprintPure)
    bool IsTowerMode() const;
    
    UFUNCTION()
    bool IsReturnNormalMode() const;
    
    UFUNCTION()
    int32 GetExistThornChainNum();
    
    UFUNCTION()
    float GetEscapeLastWoodsJailElapsedTime();
    
    UFUNCTION()
    int32 GetCaptureTargetThornChainNum();
    
    UFUNCTION()
    float GetCapturedPlayerElapsedTime();
    
    UFUNCTION()
    void DebugSetDashNum(int32 Num);
    
    UFUNCTION(BlueprintPure)
    float BP_GetEyeRotateValue() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetEyeRotateRateValue() const;
    
    UFUNCTION(BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetAnimOffsetRate() const;
    
};

