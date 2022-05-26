#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionRanged.h"
#include "ETresCommandKind.h"
#include "TresNpcAttackDefinitionMagic.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresNpcAttackDefinitionMagic : public UTresNpcAttackDefinitionRanged {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ETresCommandKind> m_CommandKind;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_NumberOfAttacks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_FlyMagic: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_SwimMagic: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_LandPut: 1;
    
public:
    UTresNpcAttackDefinitionMagic();
};

