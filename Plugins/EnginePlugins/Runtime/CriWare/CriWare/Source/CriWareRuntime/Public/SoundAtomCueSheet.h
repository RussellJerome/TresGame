#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "SoundAtomCueSheet.generated.h"

class USoundAtomCueSheet;

UCLASS(BlueprintType)
class CRIWARERUNTIME_API USoundAtomCueSheet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    bool Contains;
    
    UPROPERTY()
    FString AcbFilePath;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideAwbDirectory;
    
    UPROPERTY(EditAnywhere)
    FDirectoryPath AwbDirectory;
    
    UPROPERTY(VisibleAnywhere)
    FString CueSheetName;
    
    USoundAtomCueSheet();
    UFUNCTION(BlueprintCallable)
    static void ReleaseAcb(FName AcbName);
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCueSheet* LoadAcb(FName AcbName);
    
    UFUNCTION(BlueprintCallable)
    static void DetachDspBusSetting();
    
    UFUNCTION(BlueprintCallable)
    static void AttachDspBusSetting(const FString& SettingName);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyDspBusSnapshot(const FString& SnapshotName, int32 Milliseconds);
    
};

