#pragma once
#include "CoreMinimal.h"
#include "TresMove1_e_ex026_Fly.h"
#include "TresCoopMove1_e_ex026_ColorSmoke.generated.h"

UCLASS(HideDropdown)
class UTresCoopMove1_e_ex026_ColorSmoke : public UTresMove1_e_ex026_Fly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_FormationMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FormationAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FormationAccelDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FormationDecelDistance;
    
public:
    UTresCoopMove1_e_ex026_ColorSmoke();
};

