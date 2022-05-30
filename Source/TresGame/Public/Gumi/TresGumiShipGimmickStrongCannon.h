#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "TresGumiShipGimmickStrongCannon.generated.h"

UCLASS()
class ATresGumiShipGimmickStrongCannon : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_PrizeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bFrameRenderEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMinYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DataTableName;
    
public:
    ATresGumiShipGimmickStrongCannon();
private:
    UFUNCTION(BlueprintCallable)
    void _PauseCannon(bool Enable);
    
};

