#pragma once
#include "CoreMinimal.h"
#include "TresCameraRc.h"
#include "TresCameraRcHe001.generated.h"

UCLASS()
class ATresCameraRcHe001 : public ATresCameraRc {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_TargetEntityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_TargetEntityBoneName;
    
public:
    ATresCameraRcHe001();
};

