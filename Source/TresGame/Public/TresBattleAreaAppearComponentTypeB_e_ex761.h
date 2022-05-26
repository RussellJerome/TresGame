#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex761_BattleAreaAttack.h"
#include "TresBattleAreaAppearComponentBase_e_ex761.h"
#include "TresBattleAreaAppearComponentTypeB_e_ex761.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresBattleAreaAppearComponentTypeB_e_ex761 : public UTresBattleAreaAppearComponentBase_e_ex761 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    uint8 m_bIsCameraAimTarget: 1;
    
    UPROPERTY(EditInstanceOnly)
    float m_AppearDelayTime;
    
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<ETresEnemy_e_ex761_BattleAreaAttack::Type> m_AttackType;
    
    UPROPERTY(EditInstanceOnly)
    uint8 m_bEnableOverrideAppearTurnSpeed: 1;
    
    UPROPERTY(EditInstanceOnly)
    float m_OverrideTurnSpeed;
    
public:
    UTresBattleAreaAppearComponentTypeB_e_ex761();
};

