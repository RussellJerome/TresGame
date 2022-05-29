#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_SplineActor -FallbackName=SQEX_SplineActor
#include "ETresGimmickEwDirectionType.h"
#include "SQEX_SplineActor.h"
#include "UObject/NoExportTypes.h"
#include "TresEwGimmickSplineActor.generated.h"

class UAnimationAsset;

UCLASS()
class ATresEwGimmickSplineActor : public ASQEX_SplineActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    UAnimationAsset* AnimationAsset;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    float BlendInTime;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    float InterpCompleteTime;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bInitMoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    float MoveSpeed;
    
    UPROPERTY(EditInstanceOnly)
    ETresGimmickEwDirectionType DirectionType;
    
    UPROPERTY(VisibleAnywhere)
    FRotator FinalCustomRotator;
    
    ATresEwGimmickSplineActor();
};

