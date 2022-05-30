#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack_e_ex701_SpawnTarHandBase.generated.h"

class UCurveFloat;
class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack_e_ex701_SpawnTarHandBase : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HandLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_HandCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_HandCurveWidthRange;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_HandOneCycleDistanceRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HandCorrectStartDistance;
    
public:
    UTresAttack_e_ex701_SpawnTarHandBase();
};

