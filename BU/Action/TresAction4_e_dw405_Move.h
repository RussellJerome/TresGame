#pragma once
#include "CoreMinimal.h"
#include "TresAction2_e_dw405_PlayMotion.h"
#include "TresAction4_e_dw405_Move.generated.h"

UCLASS(HideDropdown)
class UTresAction4_e_dw405_Move : public UTresAction2_e_dw405_PlayMotion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_MoveAngles;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
public:
    UTresAction4_e_dw405_Move();
};

