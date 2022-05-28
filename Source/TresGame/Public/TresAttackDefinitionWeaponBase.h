#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"

#include "TresAttackDefinitionWeaponBase.generated.h"


UCLASS(Abstract)
class UTresAttackDefinitionWeaponBase : public UTresAttackDefinitionBase
{
    GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MaxPitch;                                                                 // 0x0170 (size: 0x4)
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MinPitch;                                                                 // 0x0174 (size: 0x4)

}; // Size: 0x178
