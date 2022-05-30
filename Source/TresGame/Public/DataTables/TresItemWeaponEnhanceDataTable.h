#pragma once
#include "CoreMinimal.h"
#include "TresItemSynthesisDataTableBase.h"
#include "ETresItemDefWeapon.h"
#include "ETresAbilityKind.h"
#include "TresItemWeaponEnhanceDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresItemWeaponEnhanceDataTable : public FTresItemSynthesisDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_FlagIndex;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefWeapon m_WeaponID;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bInitAchieved: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_WeaponLevel;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttackPlus;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MagicPlus;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityKind m_AppendAbility;
    
    TRESGAME_API FTresItemWeaponEnhanceDataTable();
};

