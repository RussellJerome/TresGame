#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex035_Nuts.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex035_Nuts : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_vRotAxis;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotAxisDeviation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotVel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBounceScaleOnAttackHit;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool m_bDisappearing;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool m_bHitGround;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float m_fTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool m_bReflected;
    
public:
    ATresProjectile_e_ex035_Nuts();
};

