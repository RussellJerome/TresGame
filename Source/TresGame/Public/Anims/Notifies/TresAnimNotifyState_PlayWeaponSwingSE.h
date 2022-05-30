#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ETresSoundAliasLabel_WeaponSwing.h"
#include "ETresSoundAliasUnit.h"
#include "TresAnimNotifyState_PlayWeaponSwingSE.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_PlayWeaponSwingSE : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresSoundAliasLabel_WeaponSwing::Type> m_SoundAliasID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresSoundAliasUnit::Type> m_SoundAliasUnit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_StartWaitTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_VolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_PitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bFollow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_FadeOutDuration;
    
public:
    UTresAnimNotifyState_PlayWeaponSwingSE();
};

