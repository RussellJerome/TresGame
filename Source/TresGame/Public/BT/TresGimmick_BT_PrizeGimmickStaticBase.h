#pragma once
#include "CoreMinimal.h"
#include "TresGimmickPrizeGimmickStaticBaseDLC.h"
#include "ETresGimmickHitCountComponentDamageProfile.h"
#include "TresGimmick_BT_PrizeGimmickStaticBase.generated.h"

class UTresStaticMeshComponent;

UCLASS(Abstract)
class ATresGimmick_BT_PrizeGimmickStaticBase : public ATresGimmickPrizeGimmickStaticBaseDLC {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* ShadowMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DitherFadeStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresGimmickHitCountComponentDamageProfile m_ReplicaHitCountProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_NormalHitCountNoDamage;
    
    ATresGimmick_BT_PrizeGimmickStaticBase();
};

