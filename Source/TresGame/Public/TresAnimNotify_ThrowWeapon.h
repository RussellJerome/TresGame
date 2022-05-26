#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_ThrowWeapon.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_ThrowWeapon : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_ThrowWeaponName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_WeaponAnimName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bWeaponAnimLoop: 1;
    
public:
    UTresAnimNotify_ThrowWeapon();
};

