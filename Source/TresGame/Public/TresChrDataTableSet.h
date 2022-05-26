#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ETresChrDataTableSetType.h"
#include "TresChrDataTableSet.generated.h"

class UDataTable;
class UTresVoiceGroupSet;

UCLASS()
class TRESGAME_API UTresChrDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    ETresChrDataTableSetType m_DataType;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_BaseParamData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_LevelData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_AttackData;
    
    UPROPERTY(EditDefaultsOnly)
    UTresVoiceGroupSet* m_VoiceData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_SEData;
    
public:
    UTresChrDataTableSet();
};

