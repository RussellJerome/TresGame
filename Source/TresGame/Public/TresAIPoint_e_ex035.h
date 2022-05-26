#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresEnemy_e_ex035_AIPointType.h"
#include "TresAIPoint_e_ex035.generated.h"

UCLASS(HideDropdown)
class ATresAIPoint_e_ex035 : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemy_e_ex035_AIPointType> m_AIPointType;
    
    ATresAIPoint_e_ex035();
    UFUNCTION(BlueprintCallable)
    bool IsReserved();
    
    UFUNCTION(BlueprintCallable)
    bool IsOccupied();
    
    UFUNCTION(BlueprintCallable)
    bool IsAvailable();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ETresEnemy_e_ex035_AIPointType> GetAIPointType();
    
};

