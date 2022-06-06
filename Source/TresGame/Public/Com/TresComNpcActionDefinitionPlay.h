#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresComNpcActionDefinitionPlay.generated.h"

UCLASS(HideDropdown)
class UTresComNpcActionDefinitionPlay : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_AnimName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bAnimLoop: 1;
    
public:
    UTresComNpcActionDefinitionPlay();
};

