#pragma once
#include "CoreMinimal.h"
#include "TresGimmickPrizeGimmickSkeletalBaseDLC.h"
#include "ETresGimmickHitCountComponentDamageProfile.h"
#include "TresGimmick_BT_PrizeGimmickSkeletalBase.generated.h"

class UTresStaticMeshComponent;

UCLASS(Abstract)
class ATresGimmick_BT_PrizeGimmickSkeletalBase : public ATresGimmickPrizeGimmickSkeletalBaseDLC {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyStaticMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* ShadowMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DitherFadeStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresGimmickHitCountComponentDamageProfile m_ReplicaHitCountProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_NormalHitCountNoDamage;
    
    ATresGimmick_BT_PrizeGimmickSkeletalBase();
};

