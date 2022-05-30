#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresSpawnHandParam_e_ex702.h"
#include "TresAction1_e_ex702_SpawnTarHand.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAction1_e_ex702_SpawnTarHand : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    FTresSpawnHandParam_e_ex702 m_HandSpawnParam;
    
public:
    UTresAction1_e_ex702_SpawnTarHand();
};

