#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGenerator_e_ex367_PlayVoise.generated.h"

class USoundBase;
class UAudioComponent;

UCLASS()
class ATresGenerator_e_ex367_PlayVoise : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PlayVoiceWaitTime;
    
private:
    UPROPERTY(Export)
    UAudioComponent* m_VoiceAudioComponent;
    
public:
    ATresGenerator_e_ex367_PlayVoise();
};

