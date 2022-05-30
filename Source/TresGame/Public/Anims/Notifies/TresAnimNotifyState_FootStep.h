#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UObject/NoExportTypes.h"
#include "TresAnimNotifyState_FootStep.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_FootStep : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsTrail;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_Interval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector m_LocationOffSet;
    
    UTresAnimNotifyState_FootStep();
};

