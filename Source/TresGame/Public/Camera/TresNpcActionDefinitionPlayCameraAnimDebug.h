#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresNpcActionDefinitionPlayCameraAnimDebug.generated.h"

UCLASS(HideDropdown)
class UTresNpcActionDefinitionPlayCameraAnimDebug : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bWeaponVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bLoop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bRootTrans: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bRootRot: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fBlendInTime;
    
public:
    UTresNpcActionDefinitionPlayCameraAnimDebug();
};

