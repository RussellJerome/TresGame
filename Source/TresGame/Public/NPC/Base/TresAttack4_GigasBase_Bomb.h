#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack4_GigasBase_Bomb.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_GigasBase_Bomb : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DistMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_DistOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_pro_BaseBombRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRotator> m_pro_BombRot;
    
public:
    UTresAttack4_GigasBase_Bomb();
};

