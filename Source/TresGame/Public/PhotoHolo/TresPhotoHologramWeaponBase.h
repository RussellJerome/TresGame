#pragma once
#include "CoreMinimal.h"
#include "TresWeaponBase.h"
#include "TresPhotoHologramWeaponBase.generated.h"

UCLASS()
class ATresPhotoHologramWeaponBase : public ATresWeaponBase {
    GENERATED_BODY()
public:
    ATresPhotoHologramWeaponBase();
    UFUNCTION(BlueprintCallable)
    void BP_NotifyStartChangeAttachParent(const FName InSocketName);
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifyEndChangeAttachParent();
    
};

