#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "RootMotionScaleDataParam_e_ex781.h"
#include "TresAttack6_e_ex781_ContinuousSlash.generated.h"

UCLASS()
class UTresAttack6_e_ex781_ContinuousSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_BodyCollSize;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseSpeedMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseDownSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseEndHigh;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FRootMotionScaleDataParam_e_ex781> m_RootMotionScaleParamList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RootMotionScaleDist;
    
    UTresAttack6_e_ex781_ContinuousSlash();
};

