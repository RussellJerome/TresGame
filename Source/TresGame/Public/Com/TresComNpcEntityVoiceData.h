#pragma once
#include "CoreMinimal.h"
#include "TresComNpcEntityVoiceData.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcEntityVoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName m_EntityName;
    
    UPROPERTY(EditAnywhere)
    float m_fVoiceRange;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> m_VoiceLists;
    
    TRESGAME_API FTresComNpcEntityVoiceData();
};

