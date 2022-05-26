#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex701_FlameBulletBase.h"
#include "TresShotParam_e_ex701.h"
#include "TresAttack2_e_ex701_FlameBullet.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex701_FlameBullet : public UTresAttack_e_ex701_FlameBulletBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresShotParam_e_ex701> m_ShotParams;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchOffsetAngle;
    
public:
    UTresAttack2_e_ex701_FlameBullet();
};

