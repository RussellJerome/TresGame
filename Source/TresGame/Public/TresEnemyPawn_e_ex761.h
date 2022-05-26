#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresStateID.h"
#include "TresEnemyPawnBase.h"
#include "ParticleSystemAttachData_e_ex761.h"
#include "ETresEnemy_e_ex761_Weapon.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex761.generated.h"

class UParticleSystem;
class ATresEnemyManagerPawn_e_ex761;
class ATresEnemyPawn_e_ex761;
class USQEX_ParticleAttachDataAsset;
class ATresCameraNormal;
class AActor;
class UObject;

UCLASS()
class ATresEnemyPawn_e_ex761 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyManagerPawn_e_ex761> m_ManagerPawnClass;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 m_bEnableSyncAttractionHitPoint: 1;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_WarpParticleAttachDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableWarpInEffectAttach: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableWarpOutEffectAttach: 1;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SideWarpParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_VerticalWarpParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    FParticleSystemAttachData_e_ex761 m_AuraEffectAttachData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PostAuraParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    FParticleSystemAttachData_e_ex761 m_AlwaysEffectAttachData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoopPostAuraParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SpreadOutScreenEffectParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemy_e_ex761_Weapon::Type> m_WeaponType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_WeaponTrailEffectGroupID;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_RightHandMotionName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LeftHandMotionName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_PrevBattleAreaIgnoreNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BattleAreaIgnoreDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BattleAreaAppearTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCameraNormal> m_WavyLightningCameraClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WavyLightningCameraStartInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WavyLightningCameraEndInterpTime;
    
    UPROPERTY(Transient)
    ATresCameraNormal* m_Camera;
    
public:
    ATresEnemyPawn_e_ex761();
    UFUNCTION()
    void OnDtorStateEvent(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    bool IsXigbarWeapon() const;
    
    UFUNCTION()
    bool IsWarpVanishMode() const;
    
    UFUNCTION()
    bool IsReverseMode() const;
    
    UFUNCTION()
    bool IsEnableForceWarp() const;
    
    UFUNCTION()
    bool IsEnableDamageWarp() const;
    
    UFUNCTION(BlueprintPure)
    ATresEnemyPawn_e_ex761* GetXigbarPawn() const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetNoneOtherPawnList(TArray<ATresEnemyPawn_e_ex761*>& OutList) const;
    
    UFUNCTION(BlueprintPure)
    float GetRightHandMotionBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetLeftHandMotionBlendRate() const;
    
    UFUNCTION(BlueprintPure)
    void GetHomeLocationList(TArray<FVector>& OutList) const;
    
    UFUNCTION()
    float GetCoopElapsedTime() const;
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetBattleAreaCameraAimActor(UObject* WorldContextObject);
    
    UFUNCTION()
    void DebugSetEnableDrawHomeLocations(int32 bEnable);
    
    UFUNCTION()
    void DebugSetEnableDrawCoopCommonInfo(int32 bEnable);
    
    UFUNCTION()
    void DebugEndReverseMode();
    
    UFUNCTION()
    void DebugApplyReverseMode();
    
};

