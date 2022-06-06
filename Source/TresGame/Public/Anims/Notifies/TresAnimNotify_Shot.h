#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Shot.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_Shot : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_ProjectileName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LocationIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bCastEffectContinue: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bAttachFireEffect: 1;
    
public:
    UTresAnimNotify_Shot();
};

