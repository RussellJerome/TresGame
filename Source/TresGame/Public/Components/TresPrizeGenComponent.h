#pragma once
#include "CoreMinimal.h"
#include "TresGimmickComponentBase.h"
#include "TresGimmickDropPrizeTable.h"
#include "TresGimmickPrizeVelocityData.h"
#include "TresDamageInfo.h"
#include "TresPrizeGenComponent.generated.h"

class UTresGimmickDropPrizeSet;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPrizeGenComponent : public UTresGimmickComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UTresGimmickDropPrizeSet* m_PrizeDataAsset;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresGimmickDropPrizeTable> m_PrizeDatas;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FTresGimmickPrizeVelocityData m_PrizeVelocityData;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float m_PrizeLivingTime;
    
public:
    UTresPrizeGenComponent();
    UFUNCTION(BlueprintCallable)
    void BP_SpawnPrize(int32 InIndex, bool InForMagicDraw);
    
    UFUNCTION(BlueprintCallable)
    void BP_SpawnFoodstuffPrize(FName InKeyName, bool InForMagicDraw);
    
    UFUNCTION(BlueprintPure)
    int32 BP_GetPrizeDataNum() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_CheckMagicAttack(const FTresDamageInfo& InDamageInfo) const;
    
};

