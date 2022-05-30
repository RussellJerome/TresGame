#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_OpenTreasureBox.generated.h"

class ATresTreasureBox;
class ATresCameraAnim;

UCLASS()
class UTresCharState_OpenTreasureBox : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ATresTreasureBox* m_pTreasureBox;
    
    UPROPERTY(Transient)
    ATresCameraAnim* m_Camera;
    
    UTresCharState_OpenTreasureBox();
};

