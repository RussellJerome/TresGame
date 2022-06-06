#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemy_e_dw401_CycloneEffectParam.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_dw401.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class UTresBodyCollPrimitive;
class UTresActionDefinitionBase;
class UCurveFloat;
class ATresActor_e_dw401_Smoke;
class UMaterialParameterCollection;

UCLASS()
class ATresEnemyPawn_e_dw401 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UParticleSystemComponent* m_CoreMoveEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_CoreStopEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_CoreEventEff;
    
    UPROPERTY()
    bool m_bIsCyclone;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_WaveEff;
    
    UPROPERTY(Export, Transient)
    TArray<UTresBodyCollPrimitive*> m_TailBodyColls;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WaveEffData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_WaveEffAttachBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EventWaveEffData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_EventWaveEffAttachBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreMoveEffData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_CoreMoveEffAttachBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreStopEffData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_CoreStopEffAttachBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreEventEffData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_CoreEventEffAttachBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreLightEffData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_CoreLightEffAttachBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreDispOnEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AppearGroundEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CloudDustEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WaveRightCloudDustEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WaveLeftCloudDustEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EventFinishHitEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PCHitEffData;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_WaveEffectLength;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_WaveSmokeEffectMax;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_WaveEffectWidth;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_WaveEffectHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaveEffectLengthInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaveEffectWidthInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaveEffectHeightInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_VenishWaveDmgHitCount;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_VenishWaveDmgHitSubCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VenishWaveDmgHitSubCountStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_VenishWaveDmgHitSubCountInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaveLengthMinCoreDispTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CoreDispOnWaveScrollTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CoreRotRollSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_LockOnRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CoreScaleMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CoreScaleTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresActionDefinitionBase> m_EventLightChainActionData;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_CyclopneAppearCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CkSlowMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CycloneRootHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CycloneHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_dw401_CycloneEffectParam> m_CycloneEffectParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_A_Color_Shift_Delay;
    
    UPROPERTY(EditDefaultsOnly)
    float m_A_Color_Shift_Time;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_A_Color;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_A_Out_Color;
    
    UPROPERTY(EditDefaultsOnly)
    float m_A_Center_Bounds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_A_Center_Bounds_Blur;
    
    UPROPERTY(EditDefaultsOnly)
    float m_A_Out_Bounds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_A_Out_Bounds_Blur;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B_Color_Shift_Delay;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B_Color_Shift_Time;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_B1_Color;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_B1_Out_Color;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B1_Center_Bounds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B1_Center_Bounds_Blur;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B1_Out_Bounds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B1_Out_Bounds_Blur;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_B2_Color;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_B2_Out_Color;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B2_Center_Bounds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B2_Center_Bounds_Blur;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B2_Out_Bounds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B2_Out_Bounds_Blur;
    
    UPROPERTY(EditDefaultsOnly)
    float m_B1_B2_Color_Shift_Time;
    
    UPROPERTY(EditDefaultsOnly)
    float m_C_Color_Shift_Delay;
    
    UPROPERTY(EditDefaultsOnly)
    float m_C_Color_Shift_Time;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_C_Color;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_C_Out_Color;
    
    UPROPERTY(EditDefaultsOnly)
    float m_C_Center_Bounds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_C_Center_Bounds_Blur;
    
    UPROPERTY(EditDefaultsOnly)
    float m_C_Out_Bounds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_C_Out_Bounds_Blur;
    
    UPROPERTY(EditDefaultsOnly)
    float m_D_Color_Shift_In_Time;
    
    UPROPERTY(EditDefaultsOnly)
    float m_D_Color_Shift_Out_Time;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_D_Color;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_D_Out_Color;
    
    UPROPERTY(EditDefaultsOnly)
    float m_D_Center_Bounds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_D_Center_Bounds_Blur;
    
    UPROPERTY(EditDefaultsOnly)
    float m_D_Out_Bounds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_D_Out_Bounds_Blur;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_CoreLightEff;
    
    UPROPERTY()
    bool m_bCoreDisp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_CloudDustEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_WaveRightCloudDustEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_WaveLeftCloudDustEff;
    
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_EventFinishHitEff;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_dw401_Smoke> m_pro_SmokeClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ttBattleEndHp;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_bLightEnable;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_LightCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StLightTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_EndLightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialParameterCollection* m_pro_ParamCollection;
    
public:
    ATresEnemyPawn_e_dw401();
    UFUNCTION(BlueprintCallable)
    void SetAction_CoreSmallAttackColorTest();
    
    UFUNCTION(BlueprintCallable)
    void SetAction_CoreScaleColorTest();
    
    UFUNCTION(BlueprintCallable)
    void SetAction_CoreDamageColorTest();
    
    UFUNCTION(BlueprintCallable)
    void SetAction_CoreBigAttackColorTest();
    
    UFUNCTION(BlueprintCallable)
    void ResetSceneLight();
    
    UFUNCTION(BlueprintCallable)
    bool IsMickeyRide();
    
    UFUNCTION(BlueprintPure)
    float GetCoreScaleRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetCoreScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetCoreRotRoll() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetCoreRotAim() const;
    
    UFUNCTION(BlueprintPure)
    float GetCoreMeshLocRate() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCoreMeshLoc() const;
    
};

