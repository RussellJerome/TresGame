#pragma once
#include "CoreMinimal.h"
#include "ETresUISlideShowDataType.h"
#include "SlideShowCutData.h"
#include "SlideShowData.generated.h"

class USwfMovie;
class USoundBase;

USTRUCT(BlueprintType)
struct FSlideShowData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USwfMovie* m_SwfAssetSequence;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumPhotos;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Duration;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxFrame;
    
    UPROPERTY(EditDefaultsOnly)
    ETresUISlideShowDataType m_DataType;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_BGM;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_BgmTextId;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSlideShowCutData> m_Cuts;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> m_InitPhotos;
    
    TRESGAME_API FSlideShowData();
};

