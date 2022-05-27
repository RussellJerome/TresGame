#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MoveSlashTypes_e_ex367.h"
#include "TresActionDefinitionBase.h"
#include "TresAction4_e_ex367_AvaterAction.generated.h"

class UTresStateBase;

UCLASS()
class UTresAction4_e_ex367_AvaterAction : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_AttackState;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<MoveSlashTypes_e_ex367> m_PramMoveSlashType;
    
    UPROPERTY(EditAnywhere)
    int32 m_AvatarId;
    
    UTresAction4_e_ex367_AvaterAction();
};

