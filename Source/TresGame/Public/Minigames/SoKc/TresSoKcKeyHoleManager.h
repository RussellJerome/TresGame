#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/LatentActionManager.h"
#include "TresSoKcKeyHoleManager.generated.h"

class ATresSoKcKeyHoleManager;
class UObject;

UCLASS()
class ATresSoKcKeyHoleManager : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKeyHoleFirstConnectedSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBgmChangeThresholdOverSignature, uint8, EventDispatchCount);
    
private:
    UPROPERTY(BlueprintAssignable)
    FKeyHoleFirstConnectedSignature _OnKeyHoleFirstConnected;
    
    UPROPERTY(BlueprintAssignable)
    FBgmChangeThresholdOverSignature _OnBgmChangeThresholdOver;
    
public:
    ATresSoKcKeyHoleManager();
    UFUNCTION(BlueprintPure)
    static ATresSoKcKeyHoleManager* Get(const UObject* WorldContext);
    
private:
    UFUNCTION(BlueprintCallable)
    static void _WaitAllKeyHoleGimmickRegister(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool _SetConnectNormaKeyHoleCount(const UObject* WorldContextObject, int32 NormaKeyHoleCount);
    
    UFUNCTION(BlueprintCallable)
    static bool _SetAllKeyHoleGimmicksVisibility(const UObject* WorldContextObject, bool bVisibility);
    
};

