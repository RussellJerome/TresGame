#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "KBRideTypes_e_ex311.h"
#include "TresAction2_e_ex311_KBRide.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAction2_e_ex311_KBRide : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<KBRideTypes_e_ex311> m_KBRideType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RideWaitTimeMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RideTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RideStartAddRot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BrakeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JanpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JanpRiseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_CameraAimRotation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CameraAimRotationOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
public:
    UTresAction2_e_ex311_KBRide();
};

