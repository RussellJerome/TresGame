#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_XIIILE_Base.h"
#include "UObject/NoExportTypes.h"
#include "TresBlackSphere_e_ex352.h"
#include "TresAttack15_e_ex352_DarkGalaxy.generated.h"

class UEnvQuery;
class UParticleSystem;
class ATresWaterCurrentSplineActor;
class UCurveFloat;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack15_e_ex352_DarkGalaxy : public UTresAttack_XIIILE_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_DarkMatterStartOffset[2];
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterMaxSpreadDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterSpreadSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterRotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterRotationAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterRotationDeceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterRotationTime;
    
    UPROPERTY(EditDefaultsOnly)
    FTresBlackSphere_e_ex352 m_BlackSpheres[2];
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWaterCurrentSplineActor> m_WaterSplineClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WindForce;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_WindForceCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetPullTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpDestinationZOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BlowAwayEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BlowAwayStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetApproachedWindForce;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetApproachedPullTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetApproachedCooldownTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DampingCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetApproachedDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetFloatTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WindEffect;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_WindForceInterpolationTime;
    
protected:
    UPROPERTY(Transient)
    ATresWaterCurrentSplineActor* m_Spline[2];
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_WindEffectCmp;
    
public:
    UTresAttack15_e_ex352_DarkGalaxy();
};

