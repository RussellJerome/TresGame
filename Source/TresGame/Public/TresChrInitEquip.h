#pragma once
#include "CoreMinimal.h"
#include "ETresItemDefBattleItem.h"
#include "ETresItemDefWeapon.h"
#include "ETresItemDefProtector.h"
#include "ETresItemDefAccessory.h"
#include "ETresAbilityKind.h"
#include "TresChrInitEquip.generated.h"

class UDataTable;
class UTresFormAbilitySet;

USTRUCT(BlueprintType)
struct FTresChrInitEquip {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefWeapon> m_Weapons;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_bWeaponFixed: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_InitProtectorSlot;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefProtector> m_Protectors;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_InitAccessorySlot;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefAccessory> m_Accessorys;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_InitItemSlot;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresItemDefBattleItem> m_Items;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresAbilityKind> m_EquipAbility;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresAbilityKind> m_HaveAbility;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresAbilityKind> m_CriticalEquipAbility;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresAbilityKind> m_CriticalHaveAbility;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_BaseParamData;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_CriticalUseAPUpNum;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_LevelData;
    
    UPROPERTY(EditDefaultsOnly)
    UTresFormAbilitySet* m_FormAbilityAsset;
    
    TRESGAME_API FTresChrInitEquip();
};

