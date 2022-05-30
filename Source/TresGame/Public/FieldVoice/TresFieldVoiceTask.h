#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresFieldVoiceTask.generated.h"

class UObject;
class UAudioComponent;
class UTresFieldVoice;

UCLASS()
class UTresFieldVoiceTask : public UTresTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UTresFieldVoice* m_pAsset;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* m_pAudio;
    
    UPROPERTY(Transient)
    UObject* m_pWho;
    
public:
    UTresFieldVoiceTask();
};

