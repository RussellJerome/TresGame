#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "ETresCommandKind.h"
#include "TresGimmickRA_Impression_SplashWater.generated.h"

class UTresReactorComponent;
class ATresCharPawnBase;

UCLASS()
class ATresGimmickRA_Impression_SplashWater : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Motion_PCAction;
    
private:
    UPROPERTY(Export)
    UTresReactorComponent* m_pReactor;
    
public:
    ATresGimmickRA_Impression_SplashWater();
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveRapunzelWaterHit();
    
private:
    UFUNCTION()
    void OnReactorCommand(ATresCharPawnBase* CommandCauser, TEnumAsByte<ETresCommandKind> CommandID, UTresReactorComponent* ReactorComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void ExecSplashWater();
    
};

