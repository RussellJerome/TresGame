#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresMove1_e_ex026_Patrol.generated.h"

UCLASS(HideDropdown)
class UTresMove1_e_ex026_Patrol : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FVector m_CenterOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChangeHeightTime;
    
public:
    UTresMove1_e_ex026_Patrol();
};

