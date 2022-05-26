#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "HVSceneTypes_e_ex781.h"
#include "TresAction10_e_ex781_ChangeHighVoltageScene.generated.h"

UCLASS()
class UTresAction10_e_ex781_ChangeHighVoltageScene : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<HVSceneTypes_e_ex781> m_ChangeSceneType;
    
    UTresAction10_e_ex781_ChangeHighVoltageScene();
};

