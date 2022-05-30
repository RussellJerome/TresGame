#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresComNpcMeshSetDatas.h"
#include "TresComNpcMeshSet.generated.h"

UCLASS()
class TRESGAME_API UTresComNpcMeshSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcMeshSetDatas> m_Datas;
    
    UTresComNpcMeshSet();
};

