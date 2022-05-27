#pragma once
#include "CoreMinimal.h"
#include "DebrisDetails_e_he903_DebrisLand.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_he903_DebrisLand.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_he903_DebrisLand : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FDebrisDetails_e_he903_DebrisLand> m_DebrisDetailArray;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DefaultLockonCursorPosBoneIndex;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttackLockonCursorPosBoneIndex;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_IgnoreBodyCollGrpName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fKeepDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fKeepDistanceVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxKeepDistance;
    
    UTresAttack3_e_he903_DebrisLand();
};

