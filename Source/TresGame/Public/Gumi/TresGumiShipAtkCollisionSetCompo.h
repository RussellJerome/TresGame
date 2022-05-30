#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCollisionSetCompo.h"
#include "TresGumiShipAtkCollisionParam.h"
#include "TresGumiShipAtkCollisionSetCompo.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipAtkCollisionSetCompo : public UTresGumiShipCollisionSetCompo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipAtkCollisionParam> m_AtkParams;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool m_bShareHitActorInfo;
    
public:
    UTresGumiShipAtkCollisionSetCompo();
};

