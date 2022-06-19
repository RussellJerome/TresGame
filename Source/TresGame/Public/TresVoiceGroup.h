#pragma once
#include "CoreMinimal.h"
#include "TresVoiceGroupUnit.h"
#include "TresVoiceGroup.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresVoiceGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_GroupName;
    
    UPROPERTY()
    uint32 m_bPlayOnGroupNotFound: 1;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_pDefaultVoice;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresVoiceGroupUnit> m_Table;
    
    FTresVoiceGroup();
};

