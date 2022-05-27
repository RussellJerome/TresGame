#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIILB_Base.h"
#include "TresAttack5_e_ex358_AvatarAttackAvatar.generated.h"

class UTresActionDefinitionBase;

UCLASS()
class UTresAttack5_e_ex358_AvatarAttackAvatar : public UTresAttack_XIIILB_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTresActionDefinitionBase* m_CurrentDefinition;
    
public:
    UTresAttack5_e_ex358_AvatarAttackAvatar();
};

