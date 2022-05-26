#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraEx021.generated.h"

class AActor;

UCLASS(NotPlaceable)
class ATresCameraEx021 : public ATresCameraNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AccDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AccDistanceTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AccEndDistanceTime;
    
    UPROPERTY(EditAnywhere)
    float m_NormalDistance[4];
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_NormalDistanceTime;
    
    UPROPERTY(EditAnywhere)
    FVector m_LastThornTargetLocalOffset;
    
private:
    UPROPERTY()
    AActor* m_BaseTarget;
    
public:
    ATresCameraEx021();
};

