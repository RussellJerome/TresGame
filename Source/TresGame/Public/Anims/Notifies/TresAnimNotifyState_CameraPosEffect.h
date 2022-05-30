#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAnimNotifyState_CameraPosEffect.generated.h"

class UParticleSystem;

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_CameraPosEffect : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* m_CameraPosEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_Offset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator m_Rotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_Scale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bCamRot: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bCamRotYaw: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bLoopEnd: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_FadeTime;
    
public:
    UTresAnimNotifyState_CameraPosEffect();
};

