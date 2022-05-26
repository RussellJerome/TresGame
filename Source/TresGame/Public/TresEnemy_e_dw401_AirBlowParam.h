#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_dw401_AirBlowParam.generated.h"

class ATresCharPawnBase;

USTRUCT()
struct FTresEnemy_e_dw401_AirBlowParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresCharPawnBase* m_pTgtPawn;
    
    TRESGAME_API FTresEnemy_e_dw401_AirBlowParam();
};

