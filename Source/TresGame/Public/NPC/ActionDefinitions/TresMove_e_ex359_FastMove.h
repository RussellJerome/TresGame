#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EEX359_SplineMoveVelocityType.h"
#include "UObject/NoExportTypes.h"
#include "TresMove_e_ex359_FastMove.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresMove_e_ex359_FastMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fWarpDisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX359_SplineMoveVelocityType> m_VelocityType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocityExp;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vStartTangent;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vEndTangent;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_Move;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bKeepRelativeLocationBetweenDestinationAndTarget;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bKeepRelativeLocationOnlyTargetDamage;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bForRevenge;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fRayStartHeightOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fRayLength;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fWallAvoidMargin;
    
    UTresMove_e_ex359_FastMove();
};

