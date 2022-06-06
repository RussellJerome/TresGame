#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex703_Base.h"
#include "TresAttack1_e_ex703_Scratch.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex703_Scratch : public UTresAttack_e_ex703_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
public:
    UTresAttack1_e_ex703_Scratch();
};

