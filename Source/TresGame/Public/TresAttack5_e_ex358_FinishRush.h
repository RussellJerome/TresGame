#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex358_Base.h"
#include "TresAttack5_e_ex358_FinishRush.generated.h"

class ATresProjectileBase;
class USoundBase;
class ATresCameraNormal;

UCLASS(HideDropdown)
class UTresAttack5_e_ex358_FinishRush : public UTresAttack_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    int32 m_AvatarNum;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsAttackEndDestroyRingCollisonProjectile: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_RingCollisonProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsAttackEndDestroyFinishProjectile: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_FinishProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RingCollisionProjectileOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ActionAbortTimingDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CameraEndDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CameraStartInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CameraEndInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDisablePlayVoiceAvatar: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bStartPlayVoice3D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_StartPlayVoiceDataList;
    
    UPROPERTY(Transient)
    ATresCameraNormal* m_Camera;
    
public:
    UTresAttack5_e_ex358_FinishRush();
};

