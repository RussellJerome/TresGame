#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoop1_e_ex325_CombinationAttack.generated.h"

UCLASS(HideDropdown)
class UTresCoop1_e_ex325_CombinationAttack : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_EntryRadius;
    
public:
    UTresCoop1_e_ex325_CombinationAttack();
};

