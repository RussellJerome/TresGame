#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraRotTarget.h"
#include "TresCameraTargetInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraRotTargetLT.generated.h"

class UObject;
class ATresCameraRotTargetLT;
class AActor;

UCLASS()
class ATresCameraRotTargetLT : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FTresCameraTargetInfo m_LookOnlyTargetInfo;
    
public:
    ATresCameraRotTargetLT();
    UFUNCTION(BlueprintCallable)
    static ATresCameraRotTargetLT* BP_SpawnTresCameraRotTargetLT(UObject* WorldContextObject, TSubclassOf<ATresCameraRotTargetLT> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraLookOnlyTargetParam(AActor* LookTarget, FVector TargetOffset, FVector TargetLocalOffset, FName TargetBoneName);
    
};

