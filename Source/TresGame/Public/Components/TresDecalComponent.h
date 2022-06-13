#pragma once
#include "CoreMinimal.h"
#include "SQEX_DecalComponent.h"
#include "TresDecalComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDecalComponent : public USQEX_DecalComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* m_pMaterial;
    
public:
    UTresDecalComponent();
};