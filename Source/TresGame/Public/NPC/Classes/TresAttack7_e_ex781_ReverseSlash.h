#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ReverseSlashTypes_e_ex781.h"
#include "RootMotionScaleDataParam_e_ex781.h"
#include "TresAttack7_e_ex781_ReverseSlash.generated.h"

class UEnvQuery;

UCLASS()
class UTresAttack7_e_ex781_ReverseSlash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ReverseSlashTypes_e_ex781> m_ReverseSlashType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ToTargetSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSubDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlashDownSkipMotionFrame;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex781 m_RootMotion1ScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleDataParam_e_ex781 m_RootMotion2ScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpCheckHightMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpCheckHightMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpHigh;
    
    UTresAttack7_e_ex781_ReverseSlash();
};

