#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationSystem -FallbackName=NavigationSystem
#include "AI/Navigation/NavigationSystem.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresNavigationSystem.generated.h"

class UObject;
class ANavLinkProxy;

UCLASS()
class TRESGAME_API UTresNavigationSystem : public UNavigationSystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<FName, ANavLinkProxy*> m_NavLinkProxyMap;
    
public:
    UTresNavigationSystem();
    UFUNCTION(BlueprintCallable)
    static void UnlockNavigationBuild(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ResetShipboardNavmesh(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void LockNavigationBuild(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsNavigationBuilding(UObject* WorldContextObject, bool bCheckDirtyToo);
    
    UFUNCTION(BlueprintCallable)
    static void BP_ApplyWorldOffset(UObject* WorldContextObject, const FVector& InOffset, bool bWorldShift);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyShipboardNavmeshWorldOffset(UObject* WorldContextObject, FVector Location, FRotator Rotation);
    
};

