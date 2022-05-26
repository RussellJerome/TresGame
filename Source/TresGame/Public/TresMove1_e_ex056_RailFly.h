#pragma once
#include "CoreMinimal.h"
#include "SQEX_SplineMoverExecutor.h"
#include "TresLocomotionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresMove1_e_ex056_RailFly.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresMove1_e_ex056_RailFly : public UTresLocomotionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_pMoveAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_pMoveDangerAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_pMoveAttackAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeedForAttack;
    
    UPROPERTY(Transient)
    FSQEX_SplineMoverExecutor m_SplineMover;
    
    UPROPERTY(Transient)
    FVector m_Location;
    
    UPROPERTY(Transient)
    FRotator m_Rotator;
    
    UPROPERTY(Transient)
    float m_FluffyMoveAngle;
    
    UPROPERTY(Transient)
    bool m_bEnableMove;
    
public:
    UTresMove1_e_ex056_RailFly();
};

