#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresSceneParamItem.generated.h"

class UDataTable;

UCLASS()
class UTresSceneParamItem : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_SceneColorAttraction;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_SceneColorMagic;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_SceneColorShootLock;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_SceneColorWeaponForm;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_SceneColorDisneyMagic;
    
    UTresSceneParamItem();
};

