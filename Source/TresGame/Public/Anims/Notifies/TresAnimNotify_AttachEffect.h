#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackEffectAttach.h"
#include "Animation/AnimNotifies/AnimNotify.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_AttachEffectNotifyDataToMetaAttachData -FallbackName=SQEX_AttachEffectNotifyDataToMetaAttachData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_AttachEffectNotifyDataToDataAsset -FallbackName=SQEX_AttachEffectNotifyDataToDataAsset
#include "TresAnimNotify_AttachEffect.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_AttachEffect : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_AttachEffectNotifyDataToMetaAttachData> MetaAttachDataList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSQEX_AttachEffectNotifyDataToDataAsset> AttachDataList;
    
    UTresAnimNotify_AttachEffect();
};

