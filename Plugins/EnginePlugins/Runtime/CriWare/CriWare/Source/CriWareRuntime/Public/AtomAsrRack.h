#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomAsrRack.generated.h"

class UAtomAsrRack;

UCLASS(BlueprintType)
class UAtomAsrRack : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 RackId;
    
    UAtomAsrRack();
    UFUNCTION(BlueprintCallable)
    void SetBusVolumeByName(const FString& BusName, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelByName(const FString& SourceBusName, const FString& DestBusName, float Level);
    
    UFUNCTION(BlueprintCallable)
    static UAtomAsrRack* GetDefaultAsrRack();
    
    UFUNCTION(BlueprintCallable)
    static UAtomAsrRack* GetAsrRack(int32 AsrRackId);
    
    UFUNCTION(BlueprintCallable)
    void DetachDspBusSetting();
    
    UFUNCTION(BlueprintCallable)
    void AttachDspBusSetting(const FString& SettingName);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDspBusSnapshot(const FString& SnapshotName, int32 Milliseconds);
    
};

