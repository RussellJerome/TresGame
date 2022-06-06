#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SQEX_BonamikWind_Actor.generated.h"

class USQEX_BonamikWind_Component;

UCLASS()
class BONAMIKRT_API ASQEX_BonamikWind_Actor : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USQEX_BonamikWind_Component* m_BonamikWind_Component;
    
    ASQEX_BonamikWind_Actor();
    UFUNCTION(BlueprintCallable)
    void SetWindScale(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetWindScale() const;
    
    UFUNCTION(BlueprintCallable)
    void Enable(bool Value);
    
};

