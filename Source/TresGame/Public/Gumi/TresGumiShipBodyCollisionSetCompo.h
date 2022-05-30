#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCollisionSetCompo.h"
#include "TresGumiShipBodyCollisionParam.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipBodyCollisionSetCompo.generated.h"

class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipBodyCollisionSetCompo : public UTresGumiShipCollisionSetCompo {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresGumiShipOnGraze, UPrimitiveComponent*, pComponent, const FVector&, rvGrazeLocation);
    
private:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipBodyCollisionParam> m_BodyParams;
    
public:
    UTresGumiShipBodyCollisionSetCompo();
};

