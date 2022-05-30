#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "TresParam_e_ex771_HeavenlyPillar.generated.h"

class UCurveFloat;
class ATresActor_e_ex771_Updraft;

UCLASS(Abstract, Const)
class UTresParam_e_ex771_HeavenlyPillar : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_FlarePillarLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_FlarePillarSpawnInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_FlarePillarSpawnRadiusMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_FlarePillarSpawnRadiusMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_AimFlarePillarLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_AimFlarePillarSpawnInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_AimFlarePillarSpawnPosRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_UpdraftRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_UpdraftHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_UpdraftForce;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_Phase2_UpdraftForceRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex771_Updraft> m_pro_Phase2_UpdraftClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase2_PhaseExecuteTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_Phase3_FlareShotNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_FlareShotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_FlareShotStRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_FlareShotRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_FlareShotWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_FlareShotInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_FlareFireWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_FlareShotYawTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_FlareShotYawTurnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_FlareShotPitchTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_FlareShotPitchTurnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_FlareShotPitchTurnUpLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_FlareShotPitchTurnDownLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_FlareShotSpawnPosScale;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_pro_Phase3_FlareFireTiming;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_UpdraftRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_UpdraftHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_UpdraftForce;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_Phase3_UpdraftForceRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex771_Updraft> m_pro_Phase3_UpdraftClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3_PhaseExecuteTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_Phase3EX_FlareShotVerticalNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_Phase3EX_FlareShotHorizontalNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3EX_FlareShotHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3EX_FlareShotWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3EX_FlareShotSpawnPosScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3EX_FlareShotAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3EX_FlareShotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3EX_FlareShotStRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3EX_FlareShotRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3EX_FlareShotInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3EX_FlareFireWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3EX_FlareScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_Phase3EX_bFlareFilmSideSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_pro_Phase3EX_FlareFireTiming;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3EX_UpdraftRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3EX_UpdraftHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3EX_UpdraftForce;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_Phase3EX_UpdraftForceRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex771_Updraft> m_pro_Phase3EX_UpdraftClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Phase3EX_PhaseExecuteTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_PhaseCtrl_Phase23ExecuteNum;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_pro_PhaseCtrl_Phase3EXEnable: 1;
    
    UTresParam_e_ex771_HeavenlyPillar();
};

