#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETresEnemy_e_ex761_BattleAreaAppearTiming.h"
#include "ETresEnemy_e_ex761_BattleAreaAppear.h"
#include "TresVolume.h"
#include "TresBattleAreaCameraData_e_ex761.h"
#include "TresBattleAreaVolume_e_ex761.generated.h"

class USceneComponent;

UCLASS()
class ATresBattleAreaVolume_e_ex761 : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export)
    USceneComponent* MyRotationCenterComponent;
    
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<ETresEnemy_e_ex761_BattleAreaAppear::Type> m_BattleAreaAppearType;
    
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<ETresEnemy_e_ex761_BattleAreaAppearTiming::Type> m_BattleAreaAppearTimingType;
    
    UPROPERTY(EditInstanceOnly)
    uint8 m_bEnableCameraEvent: 1;
    
    UPROPERTY(EditInstanceOnly)
    FTresBattleAreaCameraData_e_ex761 m_BattleAreaCameraData;
    
    UPROPERTY(EditInstanceOnly)
    uint8 m_bEnablePenetrationVec: 1;
    
    UPROPERTY(EditInstanceOnly)
    FRotator m_PenetrationRot;
    
    UPROPERTY(EditInstanceOnly)
    float m_PenetrationRangeAngle;
    
    UPROPERTY(EditInstanceOnly)
    uint8 m_bEnableResetPenetration: 1;
    
    UPROPERTY(EditInstanceOnly)
    uint8 m_bEnableAttachHeight: 1;
    
public:
    ATresBattleAreaVolume_e_ex761();
};

