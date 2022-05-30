#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack11_e_ex773_FlareTornado.generated.h"

class UCurveFloat;
class ATresActor_e_ex773_Updraft;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack11_e_ex773_FlareTornado : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_pro_CircleEnable: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WarpOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_FlarePillarNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlarePillarStDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlarePillarEndDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlarePillarHomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlarePillarMoveStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlarePillarMoveSpeed2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlarePillarRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlareTornadoLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_FlarePillarMoveSpeedRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_FlarePillarRotSpeedRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_FlarePillarEndRotSpeedRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_FlareNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Radius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireStRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlareFireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FlareFireWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresActor_e_ex773_Updraft> m_pro_UpdraftClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_UpdraftForce;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_UpdraftForceRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_VanishTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExWarpOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_ExFlarePillarNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlarePillarStDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlarePillarEndDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlarePillarHomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlarePillarMoveStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlarePillarMoveSpeed2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlarePillarRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareTornadoLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_ExFlarePillarMoveSpeedRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_ExFlarePillarRotSpeedRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_ExFlarePillarEndRotSpeedRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_ExFlareShotVerticalNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_ExFlareShotHorizontalNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareShotHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareShotWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareOffsetPosMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareOffsetPosMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareShotSpawnPosScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareShotAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareShotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareShotStRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareShotRange;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_ExFlareShotRangeDivNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareShotInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareFireWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExAtkColDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareOmenEffScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFlareOmenRingEffScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_ExbFlareFilmSideSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_pro_ExFlareFireTiming;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FRotator> m_pro_ExFlareFireAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExEffOmenEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ExFireWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_pro_ExWarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_pro_ExFireMoveSpeedRateCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BlowRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_BlowForce;
    
public:
    UTresAttack11_e_ex773_FlareTornado();
};

