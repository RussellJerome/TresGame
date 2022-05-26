#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex014_CheckOtherRollover.generated.h"

UCLASS()
class UTresBTDecorator_e_ex014_CheckOtherRollover : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_pro_Dist;
    
    UPROPERTY(EditAnywhere)
    bool m_pro_b3DDist;
    
    UPROPERTY(EditAnywhere)
    float m_pro_BaseAngle;
    
    UPROPERTY(EditAnywhere)
    bool m_pro_b3DAngle;
    
    UTresBTDecorator_e_ex014_CheckOtherRollover();
};

