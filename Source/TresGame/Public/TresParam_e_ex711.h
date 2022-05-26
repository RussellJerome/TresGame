#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "TresEnemy_e_ex711_PhysicsActorTornadoInvolveParam.h"
#include "TresEnemy_e_ex711_BouncyPetsParam.h"
#include "TresEnemy_e_ex711_OuterScaffoldParam.h"
#include "TresParam_e_ex711.generated.h"

class UParticleSystem;
class AStaticMeshActor;

UCLASS(Abstract, Const)
class UTresParam_e_ex711 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ChangeWeatherStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ChangeWeatherSecondTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ChangeWeatherThirdTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ChangeWeatherEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StartChangeWeatherEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_WeatherFirstEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_WeatherSecondEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_WeatherThirdEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Block1AppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Block2AppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Block3AppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Block4AppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Block5AppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Block6AppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Hop1AppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Hop2AppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CrashDamageHpRate;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_ex711_BouncyPetsParam> m_pro_BouncyPetsParamArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_ex711_OuterScaffoldParam> m_pro_OuterScaffoldParamArray;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Tornado_SuctionInitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Tornado_SuctionAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Tornado_SuctionMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Tornado_DisableSuctionDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Tornado_BlowMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Tornado_BlowSubSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Tornado_EnableBlowDist;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemy_e_ex711_PhysicsActorTornadoInvolveParam m_PhysicsActorTornadoParam_Small;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemy_e_ex711_PhysicsActorTornadoInvolveParam m_PhysicsActorTornadoParam_Medium;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemy_e_ex711_PhysicsActorTornadoInvolveParam m_PhysicsActorTornadoParam_Big;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AStaticMeshActor> m_pro_PlPushCollClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CollRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveImpactRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveImpactPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RushImpactRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RushImpactPower;
    
    UTresParam_e_ex711();
};

