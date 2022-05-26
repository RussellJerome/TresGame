#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresAbilityCategory.h"
#include "ETresAbilityEquipType.h"
#include "TresAbilityDataTable.generated.h"

USTRUCT()
struct FTresAbilityDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_KeyName;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityCategory m_Category;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAbilityEquipType m_EquipType;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_UseAP;
    
    UPROPERTY(EditDefaultsOnly)
    int8 m_UseMP;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_MaxEquip;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_Comment;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_UIPriority;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_NameTextID;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_HelpTextID;
    
    TRESGAME_API FTresAbilityDataTable();
};

