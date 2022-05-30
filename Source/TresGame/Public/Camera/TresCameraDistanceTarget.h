#pragma once
#include "CoreMinimal.h"
#include "TresCameraTarget.h"
#include "TresCameraDistanceTarget.generated.h"

UCLASS(Abstract)
class ATresCameraDistanceTarget : public ATresCameraTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Distance;
    
public:
    ATresCameraDistanceTarget();
    UFUNCTION(BlueprintCallable)
    void SetDistance(float Distance, float Time);
    
    UFUNCTION(BlueprintPure)
    float GetDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetDefaultDistance() const;
    
};

