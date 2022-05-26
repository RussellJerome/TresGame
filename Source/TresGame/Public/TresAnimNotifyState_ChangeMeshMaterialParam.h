#pragma once
#include "CoreMinimal.h"
#include "TresChangeMeshMaterialParamData.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresAnimNotifyState_ChangeMeshMaterialParam.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UTresAnimNotifyState_ChangeMeshMaterialParam : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTresChangeMeshMaterialParamData> m_Params;
    
public:
    UTresAnimNotifyState_ChangeMeshMaterialParam();
};

