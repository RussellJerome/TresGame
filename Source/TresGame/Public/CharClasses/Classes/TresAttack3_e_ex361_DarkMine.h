#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresEnemyEx361DarkMineInfo.h"
#include "TresAttack3_e_ex361_DarkMine.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex361_DarkMine : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx361DarkMineInfo> m_DarkMineInfo;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DarkMineVoiceID;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearMaxAngle;
    
public:
    UTresAttack3_e_ex361_DarkMine();
};

