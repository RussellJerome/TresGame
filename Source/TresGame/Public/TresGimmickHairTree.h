#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickHairTree.generated.h"

UCLASS(Config=Game)
class ATresGimmickHairTree : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_HairType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> m_ActionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ActionPointSize2D;
    
    ATresGimmickHairTree();
    UFUNCTION(BlueprintCallable)
    FVector GetActionPointLocation(int32 InIndex);
    
};

