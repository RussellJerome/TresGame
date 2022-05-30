#pragma once
#include "CoreMinimal.h"
#include "TresCoop1_EnemyShipBase_CoopEscape.h"
#include "TresCoop1_EnemyShipBase_CoopOneByOne.generated.h"

UCLASS(HideDropdown)
class UTresCoop1_EnemyShipBase_CoopOneByOne : public UTresCoop1_EnemyShipBase_CoopEscape {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_AttackerBBName;
    
public:
    UTresCoop1_EnemyShipBase_CoopOneByOne();
};

