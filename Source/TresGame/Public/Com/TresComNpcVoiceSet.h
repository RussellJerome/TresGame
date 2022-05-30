#pragma once
#include "CoreMinimal.h"
#include "TresComNpcVoiceSetDatas.h"
#include "Engine/DataAsset.h"
#include "TresComNpcRandomVoiceDatas.h"
#include "TresComNpcRandomFieldVoiceDatas.h"
#include "TresComNpcVoiceSet.generated.h"

UCLASS()
class TRESGAME_API UTresComNpcVoiceSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcVoiceSetDatas> m_Datas;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcRandomVoiceDatas> m_StaggerDatas;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcRandomVoiceDatas> m_SpecialPerformDatas;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcRandomVoiceDatas> m_GreetDatas;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresComNpcRandomFieldVoiceDatas> m_HeroActionDatas;
    
    UTresComNpcVoiceSet();
};

