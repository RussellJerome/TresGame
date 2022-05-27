#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex357_Base.h"
#include "RootMotionScaleParam_e_ex358.h"
#include "TresAttack5_e_ex357_CircleReject.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex357_CircleReject : public UTresAttack_e_ex357_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex358 m_MinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRootMotionScaleParam_e_ex358 m_MaxRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseMaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BloomShieldTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_FinishProjectileClass;
    
public:
    UTresAttack5_e_ex357_CircleReject();
};

