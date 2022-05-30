#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraNormal.h"
#include "TresCameraHe05Mountain.generated.h"

class ATresCameraHe05Mountain;
class UObject;
class UCurveFloat;

UCLASS()
class ATresCameraHe05Mountain : public ATresCameraNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_TitanDistance;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_DistanceCurve;
    
public:
    ATresCameraHe05Mountain();
    UFUNCTION(BlueprintCallable)
    static ATresCameraHe05Mountain* BP_SpawnTresCameraHe05Mountain(UObject* WorldContextObject, TSubclassOf<ATresCameraHe05Mountain> CameraClass, const FName CameraName);
    
};

