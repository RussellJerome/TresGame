#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAction5_e_ex311_AfterImage.generated.h"

UCLASS(HideDropdown)
class UTresAction5_e_ex311_AfterImage : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_DispTime;
    
    UPROPERTY(EditAnywhere)
    float m_MotionSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_EndTime;
    
    UTresAction5_e_ex311_AfterImage();
};

