#pragma once
#include "CoreMinimal.h"
#include "TresDetectMarkerComponentBase.h"
#include "TresGimmickRA_Pudding_PhotoComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickRA_Pudding_PhotoComponent : public UTresDetectMarkerComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_MarkerID;
    
    UPROPERTY(EditAnywhere)
    bool m_Valid;
    
    UPROPERTY(EditAnywhere)
    bool m_Normal;
    
    UPROPERTY(EditAnywhere)
    int32 m_Point;
    
    UTresGimmickRA_Pudding_PhotoComponent();
};

