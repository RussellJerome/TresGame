#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresEnemyEx721WoodsJailPattern.h"
#include "TresAttack9_e_ex721_WoodsJail.generated.h"

UCLASS(HideDropdown)
class UTresAttack9_e_ex721_WoodsJail : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsRandAppearWait: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_RandAppearWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_RandWoodsJailScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopholeWoodsJailOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WoodsJailRange;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresEnemyEx721WoodsJailPattern> m_WoodsJailPatterns;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InsuranceTime;
    
public:
    UTresAttack9_e_ex721_WoodsJail();
};

