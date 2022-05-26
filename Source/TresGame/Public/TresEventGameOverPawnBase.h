#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEventPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEventGameOverPawnBase.generated.h"

class ATresCameraAnim;
class UParticleSystem;
class UCameraAnim;
class ATresKHShaderController;
class UParticleSystemComponent;

UCLASS(Abstract)
class TRESGAME_API ATresEventGameOverPawnBase : public ATresEventPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UCameraAnim* m_CameraAnimAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LightEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_LightLocation;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresKHShaderController> m_GameOverKHS;
    
    UPROPERTY(Transient)
    ATresCameraAnim* m_Camera;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_pEffect;
    
    UPROPERTY(Transient)
    ATresKHShaderController* m_pKHS;
    
public:
    ATresEventGameOverPawnBase();
};

