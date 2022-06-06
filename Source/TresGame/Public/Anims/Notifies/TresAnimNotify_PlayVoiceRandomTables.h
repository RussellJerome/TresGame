#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "RandomTableParameter.h"
#include "TresAnimNotify_PlayVoiceRandomTables.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_PlayVoiceRandomTables : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FRandomTableParameter> m_RandomVoiceTables;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_VolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_PitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bFollow;
    
public:
    UTresAnimNotify_PlayVoiceRandomTables();
};

