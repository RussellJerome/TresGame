#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "UObject/NoExportTypes.h"
#include "ETresInfluenceMapLayer.h"
#include "ETresInfluenceEmitterShape.h"
#include "TresInfluenceEmitterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresInfluenceEmitterComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresInfluenceMapLayer::Type> m_Layer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETresInfluenceEmitterShape::Type> m_Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_ShapeSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MinInfluence;
    
    UPROPERTY(EditAnywhere)
    float m_TimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUnlimitedTime;
    
public:
    UTresInfluenceEmitterComponent();
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

