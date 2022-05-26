#pragma once
#include "CoreMinimal.h"
#include "EEX355_ClaymoreRoamCenterType.h"
#include "UObject/NoExportTypes.h"
#include "EX355_ThrowRoamMoveInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_ThrowRoamMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bRoamMove;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRoamMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRoamMoveVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRoamRotateYawVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRoamRotatePitchVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX355_ClaymoreRoamCenterType> m_RoamCenterType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRoamRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRoamHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_rInitRotOffset_Roam;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableAttackCollision;
    
    TRESGAME_API FEX355_ThrowRoamMoveInfo();
};

