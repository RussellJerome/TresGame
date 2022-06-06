#pragma once
#include "CoreMinimal.h"
#include "TresBluePrintObjectBase.h"
#include "ETresFieldVoiceExecuteMode.h"
#include "UObject/NoExportTypes.h"
#include "TresBluePrintFieldVoiceBase.generated.h"

class ATresAIPawnBase;
class UTresFieldVoiceCommonParam;
class UTresFieldVoice;

UCLASS(Abstract, EditInlineNew)
class UTresBluePrintFieldVoiceBase : public UTresBluePrintObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresFieldVoiceCommonParam* m_pCommonParam;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresFieldVoiceExecuteMode::Type> m_ExecuteMode;
    
    UPROPERTY(EditAnywhere)
    bool m_Infinity;
    
public:
    UTresBluePrintFieldVoiceBase();
    UFUNCTION(BlueprintPure)
    bool IsSameExecuter();
    
    UFUNCTION(BlueprintPure)
    bool IsSameBruePrintClass();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingVoice();
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayAfterTime(float Time);
    
    UFUNCTION(BlueprintPure)
    bool IsOverLastExecuteSameGroupTime(float Time);
    
    UFUNCTION(BlueprintPure)
    bool IsInCenter(const FVector2D& posRate, const FVector2D& InRate);
    
    UFUNCTION(BlueprintPure)
    bool IsCinematic();
    
    UFUNCTION(BlueprintPure)
    static UTresFieldVoice* GetRandomFieldVoice(TArray<UTresFieldVoice*> targetArray);
    
    UFUNCTION(BlueprintPure)
    ATresAIPawnBase* GetPlayer();
    
    UFUNCTION(BlueprintPure)
    float GetPlayAfterTime();
    
    UFUNCTION(BlueprintPure)
    int32 GetExecuteNum();
    
    UFUNCTION(BlueprintNativeEvent)
    bool Execute();
    
};

