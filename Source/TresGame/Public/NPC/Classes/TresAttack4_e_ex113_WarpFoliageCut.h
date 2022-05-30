#pragma once
#include "CoreMinimal.h"
#include "TresAttack1_e_ex113_FoliageCut.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresAttack4_e_ex113_WarpFoliageCut.generated.h"

class UAnimSequenceBase;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack4_e_ex113_WarpFoliageCut : public UTresAttack1_e_ex113_FoliageCut {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_WarpStartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_WarpEndAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_RevengeEnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryRunMode::Type> m_EnvQueryRunMode;
    
public:
    UTresAttack4_e_ex113_WarpFoliageCut();
};

