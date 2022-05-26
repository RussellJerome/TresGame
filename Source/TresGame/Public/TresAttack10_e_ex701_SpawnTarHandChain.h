#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresTarHandParam_e_ex701.h"
#include "TresAttack10_e_ex701_SpawnTarHandChain.generated.h"

class UTresAttack_e_ex701_SpawnTarHandBase;
class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack10_e_ex701_SpawnTarHandChain : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresTarHandParam_e_ex701> m_TarHandParamList;
    
    UPROPERTY()
    UTresAttack_e_ex701_SpawnTarHandBase* m_CurrentAction;
    
    UPROPERTY()
    UTresAttack_e_ex701_SpawnTarHandBase* m_NextAction;
    
public:
    UTresAttack10_e_ex701_SpawnTarHandChain();
};

