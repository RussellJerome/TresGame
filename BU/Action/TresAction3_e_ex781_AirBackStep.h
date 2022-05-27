#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex781_AirBackStep.generated.h"

class USoundBase;
class UCurveFloat;
class UEnvQuery;

UCLASS()
class UTresAction3_e_ex781_AirBackStep : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_MoveScaleCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_MoveEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_JumpHight;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_DoWarp;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_WarpDisableLockOn;
    
    UTresAction3_e_ex781_AirBackStep();
};

