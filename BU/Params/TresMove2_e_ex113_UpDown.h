#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionBase.h"
#include "TresAnims_e_ex113_Move2_UpDown.h"
#include "TresMove2_e_ex113_UpDown.generated.h"

UCLASS(HideDropdown)
class UTresMove2_e_ex113_UpDown : public UTresLocomotionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTresAnims_e_ex113_Move2_UpDown m_UpAnims;
    
    UPROPERTY(EditDefaultsOnly)
    FTresAnims_e_ex113_Move2_UpDown m_DownAnims;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotSpeed;
    
public:
    UTresMove2_e_ex113_UpDown();
};

