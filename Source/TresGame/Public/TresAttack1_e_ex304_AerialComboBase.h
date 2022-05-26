#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIIE_Base.h"
#include "TresEnemyEx304RootMotionScaleInfo.h"
#include "ETresEnemyEx304ComboKind.h"
#include "TresAttack1_e_ex304_AerialComboBase.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex304_AerialComboBase : public UTresAttack_XIIIE_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx304ComboKind m_ComboKind;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx304RootMotionScaleInfo> m_RootMotionScaleInfoList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ApproachTargetSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ApproachTargetDistance;
    
public:
    UTresAttack1_e_ex304_AerialComboBase();
};

