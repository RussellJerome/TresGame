#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresDropItemID.h"
#include "TresGimmickCA_SimpleChar.generated.h"

UCLASS(Abstract, Config=Game)
class ATresGimmickCA_SimpleChar : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ETresDropItemID m_prizeKind;
    
    UPROPERTY(EditAnywhere)
    float m_prizeSpawnUpDirectionOffset;
    
    UPROPERTY(EditAnywhere)
    bool m_DisableSpawnPrizeAuto;
    
public:
    ATresGimmickCA_SimpleChar();
    UFUNCTION(BlueprintCallable)
    void RequestSpawnPrize();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void RequestDead();
    
};

