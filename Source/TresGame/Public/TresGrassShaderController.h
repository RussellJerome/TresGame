#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGrassShaderController.generated.h"

UCLASS()
class ATresGrassShaderController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D m_WindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_WindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_WindSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_WindPower;
    
    ATresGrassShaderController();
    UFUNCTION(BlueprintImplementableEvent)
    void SetGrassParameter(int32 InIndex, FVector InPosition, float InRadius, float inPower, int32 InType, float inDetailPower);
    
    UFUNCTION(BlueprintImplementableEvent)
    void MulGrassPower(int32 InIndex, float inPower);
    
};

