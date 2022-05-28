#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "ETresEnemy_e_ex028_BodyColor.h"
#include "TresEnemyPawn_e_ex028.generated.h"

UCLASS()
class ATresEnemyPawn_e_ex028 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemy_e_ex028_BodyColor> m_pro_DefaultBodyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<ETresEnemy_e_ex028_BodyColor>> m_pro_BodyColorArray;
    
    ATresEnemyPawn_e_ex028();
    UFUNCTION(BlueprintCallable)
    bool isBodyColor(TEnumAsByte<ETresEnemy_e_ex028_BodyColor> Color);
    
};

