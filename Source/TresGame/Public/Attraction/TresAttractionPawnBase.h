#pragma once
#include "CoreMinimal.h"
#include "TresAccompanyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAttractionPawnBase.generated.h"

class ATresCameraFirstPerson;

UCLASS(Abstract)
class ATresAttractionPawnBase : public ATresAccompanyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_Param_FCameraLocalOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_Param_FCameraRotMin;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_Param_FCameraRotMax;
    
protected:
    UPROPERTY()
    ATresCameraFirstPerson* m_FCamera;
    
public:
    ATresAttractionPawnBase();
};

