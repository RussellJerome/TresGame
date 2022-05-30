#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIILE_Base.h"
#include "TresAttack6_e_ex352_ReleaseDarkMine.generated.h"

UCLASS(HideDropdown)
class UTresAttack6_e_ex352_ReleaseDarkMine : public UTresAttack_XIIILE_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_DMNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMBootRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMTimeToExplodeAfterBoot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMStartAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMEndAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMApproachSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DistanceBetweenDarkMineAndAnthem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingStopDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMTimeToStartDeceleratingAfterFiring;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMDeceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DMAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DMLimit;
    
public:
    UTresAttack6_e_ex352_ReleaseDarkMine();
};

