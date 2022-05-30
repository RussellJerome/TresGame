#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresComNpcActionSeqDatas.h"
#include "TresComNpcActionSeq.generated.h"

UCLASS()
class TRESGAME_API UTresComNpcActionSeq : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcActionSeqDatas> m_SeqDatas;
    
    UTresComNpcActionSeq();
};

