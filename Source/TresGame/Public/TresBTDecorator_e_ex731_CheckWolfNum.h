#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex731_CheckWolfNum.generated.h"

UCLASS()
class UTresBTDecorator_e_ex731_CheckWolfNum : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_iMin;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMax;
    
    UPROPERTY()
    bool m_bMin;
    
    UPROPERTY()
    bool m_bMax;
    
    UTresBTDecorator_e_ex731_CheckWolfNum();
};

