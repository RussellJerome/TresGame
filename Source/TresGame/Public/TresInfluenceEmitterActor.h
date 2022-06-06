#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresInfluenceMapLayer.h"
#include "UObject/NoExportTypes.h"
#include "ETresInfluenceEmitterShape.h"
#include "TresInfluenceEmitterActor.generated.h"

class UTresInfluenceEmitterComponent;

UCLASS()
class ATresInfluenceEmitterActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UTresInfluenceEmitterComponent* m_InfluenceEmitterComponent;
    
public:
    ATresInfluenceEmitterActor();
    UFUNCTION(BlueprintCallable)
    void SetUnlimitedTime(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeLimit(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetShape(TEnumAsByte<ETresInfluenceEmitterShape::Type> inShape, FVector inShapeSize);
    
    UFUNCTION(BlueprintCallable)
    void SetMinInfluence(float inMinInfluence);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxInfluence(float inMaxInfluence);
    
    UFUNCTION(BlueprintCallable)
    void SetLayer(TEnumAsByte<ETresInfluenceMapLayer::Type> InLayer);
    
};

