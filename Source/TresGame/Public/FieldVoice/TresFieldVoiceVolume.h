#pragma once
#include "CoreMinimal.h"
#include "ATresFieldVoiceVolumeSignatureDelegate.h"
#include "TresVolume.h"
#include "TresFieldVoiceVolume.generated.h"

class UTresFieldVoiceBluePrint;
class UTresFieldVoiceCommonParam;

UCLASS()
class ATresFieldVoiceVolume : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_GroupName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UTresFieldVoiceBluePrint*> m_BluePrints;
    
    UPROPERTY(Transient)
    UTresFieldVoiceCommonParam* m_pCommonParam;
    
    UPROPERTY(BlueprintAssignable)
    FATresFieldVoiceVolumeSignature OnPlayFieldVoice;
    
public:
    ATresFieldVoiceVolume();
};

