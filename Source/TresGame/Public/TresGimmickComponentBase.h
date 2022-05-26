#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresGimmickComponentBase.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickComponentBase : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    uint8 m_bIsGimmickActive: 1;
    
    UPROPERTY()
    uint8 m_bOwnerHaveTeamNo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_TeamNo;
    
public:
    UTresGimmickComponentBase();
    UFUNCTION(BlueprintPure)
    bool BP_IsGimmickComponentActive() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_DeactivateGimmickComponent();
    
    UFUNCTION(BlueprintCallable)
    void BP_ActivateGimmickComponent();
    
};

