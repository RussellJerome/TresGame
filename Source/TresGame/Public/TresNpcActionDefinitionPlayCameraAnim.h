#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresNpcActionDefinitionPlayCameraAnim.generated.h"

UCLASS(HideDropdown)
class UTresNpcActionDefinitionPlayCameraAnim : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bDisableWeapon: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bDispWeaponCheck: 1;
    
public:
    UTresNpcActionDefinitionPlayCameraAnim();
};

