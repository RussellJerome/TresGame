#pragma once
#include "CoreMinimal.h"
#include "ETresHitWallAction.h"
#include "ETresDashLimit.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttackDefinitionDash.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttackDefinitionDash : public UTresAttackDefinitionBase {
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
    UAnimSequenceBase* m_SuccessAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_HitWallAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_WallReflectRightAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_WallReflectLeftAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MaxMoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ETresDashLimit::Type> m_DashLimit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_DashAmount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ETresHitWallAction::Type> m_HitWallAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_AffectGravity: 1;
    
public:
    UTresAttackDefinitionDash();
};

