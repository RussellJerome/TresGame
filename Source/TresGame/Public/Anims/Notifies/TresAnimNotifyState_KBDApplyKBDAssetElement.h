#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_KBDApplyKBDAssetElement.generated.h"

class USQEX_DynamicBindAssetUserData;

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_KBDApplyKBDAssetElement : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TargetElementNameForBegin;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsResetForBegin;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsResetPoseForBegin;
    
    UPROPERTY(EditAnywhere)
    int32 m_PreRollForBegin;
    
    UPROPERTY(EditAnywhere)
    USQEX_DynamicBindAssetUserData* m_KBDAssetUserDataForBegin;
    
    UPROPERTY(EditAnywhere)
    bool m_KeepReferencesForBegin;
    
    UPROPERTY(EditAnywhere)
    FName TargetElementNameForEnd;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsResetForEnd;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsResetPoseForEnd;
    
    UPROPERTY(EditAnywhere)
    int32 m_PreRollForEnd;
    
    UPROPERTY(EditAnywhere)
    USQEX_DynamicBindAssetUserData* m_KBDAssetUserDataForEnd;
    
    UPROPERTY(EditAnywhere)
    bool m_KeepReferencesForEnd;
    
    UTresAnimNotifyState_KBDApplyKBDAssetElement();
};

