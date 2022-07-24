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
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ETresItemDefWeapon> m_Weapons;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint32 m_bWeaponFixed: 1;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 m_InitProtectorSlot;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ETresItemDefProtector> m_Protectors;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 m_InitAccessorySlot;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ETresItemDefAccessory> m_Accessorys;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 m_InitItemSlot;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ETresItemDefBattleItem> m_Items;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ETresAbilityKind> m_EquipAbility;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ETresAbilityKind> m_HaveAbility;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ETresAbilityKind> m_CriticalEquipAbility;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<ETresAbilityKind> m_CriticalHaveAbility;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* m_BaseParamData;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 m_CriticalUseAPUpNum;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UDataTable* m_LevelData;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTresFormAbilitySet* m_FormAbilityAsset;
    
    TRESGAME_API FTresChrInitEquip();
};

