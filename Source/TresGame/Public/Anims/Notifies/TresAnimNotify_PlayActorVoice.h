#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_PlayActorVoice.generated.h"

class UTresActorVoice;

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_PlayActorVoice : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTresActorVoice* m_ActorVoice;
    
    UTresAnimNotify_PlayActorVoice();
};

