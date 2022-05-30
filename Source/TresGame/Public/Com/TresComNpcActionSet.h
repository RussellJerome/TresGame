#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresComNpcActionSetDatas.h"
#include "TresComNpcActionSet.generated.h"

UCLASS()
class TRESGAME_API UTresComNpcActionSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcActionSetDatas> m_Datas;
    
    UTresComNpcActionSet();
};

