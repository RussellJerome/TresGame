#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresChrUniqueID.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcAINpcModeFreeWalkWayPoint.generated.h"

UCLASS()
class ATresNpcAINpcModeFreeWalkWayPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresChrUniqueID m_CharUniqueID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bUseLookAtPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_LookAtPoint;
    
    ATresNpcAINpcModeFreeWalkWayPoint();
    UFUNCTION(BlueprintPure)
    FString GetCharUniqueIDName() const;
    
};

