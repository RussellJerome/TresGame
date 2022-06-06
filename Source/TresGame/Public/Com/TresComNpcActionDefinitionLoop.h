#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresComNpcActionDefinitionLoop.generated.h"

UCLASS(HideDropdown)
class UTresComNpcActionDefinitionLoop : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_LoopStartAnimName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_LoopAnimName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_LoopEndAnimName;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 m_bLoopTime: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLoopTime;
    
    UTresComNpcActionDefinitionLoop();
};

