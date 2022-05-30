#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAction4_e_fz903_BeatenSnowCoverSwing.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(HideDropdown)
class UTresAction4_e_fz903_BeatenSnowCoverSwing : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(EditAnywhere)
    float m_GravityScale;
    
    UPROPERTY(EditAnywhere)
    float m_StartWalkTime;
    
    UPROPERTY(EditAnywhere)
    float m_MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_StunLoopTime;
    
public:
    UPROPERTY(EditAnywhere)
    FVector m_WarpOffsetLocation;
    
    UTresAction4_e_fz903_BeatenSnowCoverSwing();
};

