#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_SetWeaponVisible.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_SetWeaponVisible : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bNewVisible;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bAppearEffect;
    
public:
    UTresAnimNotify_SetWeaponVisible();
};

