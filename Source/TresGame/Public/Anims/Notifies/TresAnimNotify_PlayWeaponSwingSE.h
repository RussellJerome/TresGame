#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ETresSoundAliasLabel_WeaponSwing.h"
#include "ETresSoundAliasUnit.h"
#include "TresAnimNotify_PlayWeaponSwingSE.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_PlayWeaponSwingSE : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresSoundAliasLabel_WeaponSwing::Type> m_SoundAliasID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresSoundAliasUnit::Type> m_SoundAliasUnit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_VolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_PitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bFollow: 1;
    
public:
    UTresAnimNotify_PlayWeaponSwingSE();
};

