#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack12_e_ex781_HeartBreak.generated.h"

class ATresPlayerPawnBase;

UCLASS()
class UTresAttack12_e_ex781_HeartBreak : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_CatchOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CatchCenterMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_Test;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_AIAbortMode;
    
private:
    UPROPERTY()
    ATresPlayerPawnBase* m_CatchPlayer;
    
public:
    UTresAttack12_e_ex781_HeartBreak();
};

