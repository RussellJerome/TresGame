#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_AttachEffectNotifyDataToMetaAttachData -FallbackName=SQEX_AttachEffectNotifyDataToMetaAttachData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_AttachEffectNotifyDataToDataAsset -FallbackName=SQEX_AttachEffectNotifyDataToDataAsset
#include "TresAnimNotifyState_AttachEffect.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_AttachEffect : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_AttachEffectNotifyDataToMetaAttachData> MetaAttachDataList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_AttachEffectNotifyDataToDataAsset> AttachDataList;
    
    UTresAnimNotifyState_AttachEffect();
};

