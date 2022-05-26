#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ETresSoundAliasUnitID.h"
#include "ETresSoundAliasLabel.h"
#include "TresAnimNotify_PlaySE.generated.h"

class USoundBase;

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_PlaySE : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* m_SoundAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresSoundAliasLabel> m_SoundAliasID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresSoundAliasUnitID m_SoundAliasUnit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_VolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_PitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bFollow: 1;
    
public:
    UTresAnimNotify_PlaySE();
};

