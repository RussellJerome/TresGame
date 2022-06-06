#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "ETresCampPawnAnimTypeID.h"
#include "TresCampPawnBase.generated.h"

UCLASS(Abstract)
class TRESGAME_API ATresCampPawnBase : public ATresCharPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bResetBonamikWhenAnimChange: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bPreRollBonamikWhenAnimChange: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_BonamikPreRollNumDefault;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TEnumAsByte<ETresCampPawnAnimTypeID> m_AnimType;
    
public:
    ATresCampPawnBase();
};

