#pragma once
#include "CoreMinimal.h"
#include "TresPawnBase.h"
#include "TresEnemyPawn_e_ex367Light.generated.h"

class UDirectionalLightComponent;
class UPointLightComponent;

UCLASS()
class ATresEnemyPawn_e_ex367Light : public ATresPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDirectionalLightComponent* MyDirectionalLight;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPointLightComponent* MyPointLight;
    
    UPROPERTY(EditAnywhere)
    float m_DirectionalIntensity;
    
    UPROPERTY(EditAnywhere)
    float m_PointLightIntensity;
    
    UPROPERTY(EditAnywhere)
    float m_AllLightIntensity;
    
    ATresEnemyPawn_e_ex367Light();
};

