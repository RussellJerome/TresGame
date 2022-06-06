#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_KBDApplyKBDAssetElement.generated.h"

class USQEX_DynamicBindAssetUserData;

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_KBDApplyKBDAssetElement : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TargetElementName;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsReset;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsResetPose;
    
    UPROPERTY(EditAnywhere)
    int32 m_PreRoll;
    
    UPROPERTY(EditAnywhere)
    USQEX_DynamicBindAssetUserData* m_KBDAssetUserData;
    
    UPROPERTY(EditAnywhere)
    bool m_KeepReferences;
    
    UTresAnimNotify_KBDApplyKBDAssetElement();
};

