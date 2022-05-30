#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraTarget.h"
#include "TresCameraFirstPerson.generated.h"

class ATresCameraFirstPerson;
class UObject;

UCLASS(NotPlaceable)
class ATresCameraFirstPerson : public ATresCameraTarget {
    GENERATED_BODY()
public:
    ATresCameraFirstPerson();
    UFUNCTION(BlueprintCallable)
    static ATresCameraFirstPerson* BP_SpawnTresCameraFirstPerson(UObject* WorldContextObject, TSubclassOf<ATresCameraFirstPerson> CameraClass, const FName CameraName);
    
};

