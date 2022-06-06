#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresNpcActionDefinitionPlayAnim.generated.h"

UCLASS(HideDropdown)
class UTresNpcActionDefinitionPlayAnim : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName m_AnimName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bLoop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bRootTrans: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bRootRot: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fBlendInTime;
    
public:
    UTresNpcActionDefinitionPlayAnim();
};

