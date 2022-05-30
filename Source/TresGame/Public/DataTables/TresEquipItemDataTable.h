#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresAbilityKind.h"
#include "TresEquipItemDataTable.generated.h"

class UTresEquipDataBase;

USTRUCT(BlueprintType)
struct FTresEquipItemDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_KeyName;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_Comment;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AP;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttackPlus;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MagicPlus;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DefensePlus;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistPhysical;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistFire;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistBlizzard;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistThunder;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistWater;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistAero;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistDark;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AttrResistNoType;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresAbilityKind> m_AppendAbility;
    
    UPROPERTY(EditDefaultsOnly)
    UTresEquipDataBase* m_EquipSubclass;
    
    TRESGAME_API FTresEquipItemDataTable();
};

