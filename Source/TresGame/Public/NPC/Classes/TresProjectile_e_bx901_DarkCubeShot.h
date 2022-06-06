#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex901_RailSlideBase.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_bx901_DarkCubeShot.generated.h"

class UParticleSystem;
class UTresBodyCollPrimitive;

UCLASS(Abstract)
class ATresProjectile_e_bx901_DarkCubeShot : public ATresProjectile_e_ex901_RailSlideBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fPlayerProjGrabMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPlayerProjGrabMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPlayerProjGrabTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDisableLockonDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDisableLockonAngleToDarkBaymax;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDisableHomingOnLockonDisabled;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDisableHomingDebugDisp;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ChangeColorParamName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HitEffect_Guard;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HitEffect_Self;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MoveStartEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vMoveStartEffectLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_vMoveStartEffectScale;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UTresBodyCollPrimitive* m_OuterBodyCollPrim;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool m_bOwnHit;
    
public:
    ATresProjectile_e_bx901_DarkCubeShot();
};

