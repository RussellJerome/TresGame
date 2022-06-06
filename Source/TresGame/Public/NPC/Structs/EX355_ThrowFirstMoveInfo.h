#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EX355_ThrowFirstMoveInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX355_ThrowFirstMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bFirstMove;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFirstMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInitVelocity_First;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxVelocity_First;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAccel_First;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bInitRotOffset_First;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_rInitRotOffset_First;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bInitRotOffset_Roam_NoOwnerRot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinHomingDistance_Fisrt;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHomingAngle_First;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInitHomingRotateVelocity_First;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHomingRotateVelocity_First;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHomingRotateAccel_First;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHomingAngleIgnoreTime_First;
    
    TRESGAME_API FEX355_ThrowFirstMoveInfo();
};

