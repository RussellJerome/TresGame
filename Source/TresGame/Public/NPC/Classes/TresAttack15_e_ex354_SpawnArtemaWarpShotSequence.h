#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "EX354_ArtemaWarpShotSequenceInfoSet.h"
#include "TresAttack15_e_ex354_SpawnArtemaWarpShotSequence.generated.h"

UCLASS(HideDropdown)
class UTresAttack15_e_ex354_SpawnArtemaWarpShotSequence : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEX354_ArtemaWarpShotSequenceInfoSet m_SequenceInfoSet;
    
    UTresAttack15_e_ex354_SpawnArtemaWarpShotSequence();
};

