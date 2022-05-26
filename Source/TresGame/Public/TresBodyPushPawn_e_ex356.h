#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "ETresBodyPushPowerLevel.h"
#include "TresBodyPushPawn_e_ex356.generated.h"

UCLASS()
class ATresBodyPushPawn_e_ex356 : public ATresCharPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    ETresBodyPushPowerLevel m_BodyPushPowerLevel;
    
public:
    ATresBodyPushPawn_e_ex356();
};

