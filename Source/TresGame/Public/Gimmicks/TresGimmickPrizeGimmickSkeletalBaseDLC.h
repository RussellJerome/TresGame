#pragma once
#include "CoreMinimal.h"
#include "TresGimmickPrizeGimmickSkeletalBase.h"
#include "TresGimmickPrizeGimmickSkeletalBaseDLC.generated.h"

class AActor;
class UTresGimmickHitCountComponent;
class UTresPrizeGenComponent;
class UTresLockonTargetComponent;
class UTresBodyCollPrimitive;
class UTresNavModifierComponent;

UCLASS(Abstract)
class ATresGimmickPrizeGimmickSkeletalBaseDLC : public ATresGimmickPrizeGimmickSkeletalBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* TresLockonTarget;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresBodyCollPrimitive* TresBodyCollPrimitive;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresPrizeGenComponent* TresPrizeGen;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresGimmickHitCountComponent* TresGimmickHitCount;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresNavModifierComponent* TresNavModifier;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_DropPrize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_PrizeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<AActor*> m_DestroyGimmickGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bDestroyDisableBodyCollition;
    
    ATresGimmickPrizeGimmickSkeletalBaseDLC();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveAnimation();
    
};

