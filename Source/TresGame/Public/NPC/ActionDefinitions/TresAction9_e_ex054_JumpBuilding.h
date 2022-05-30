#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction9_e_ex054_JumpBuilding.generated.h"

UCLASS(HideDropdown)
class UTresAction9_e_ex054_JumpBuilding : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_JumpUpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_JumpDownSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CameraChangeHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FallHeight;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_WarpDefalutPos;
    
    UTresAction9_e_ex054_JumpBuilding();
};

