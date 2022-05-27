#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIILB_Base.h"
#include "TresWildDanceParam_e_ex358.h"
#include "TresAttack5_e_ex358_AvatarWildDanceMain.generated.h"

UCLASS()
class UTresAttack5_e_ex358_AvatarWildDanceMain : public UTresAttack_XIIILB_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWildDanceParam_e_ex358> m_ActionSetList;
    
public:
    UTresAttack5_e_ex358_AvatarWildDanceMain();
};

