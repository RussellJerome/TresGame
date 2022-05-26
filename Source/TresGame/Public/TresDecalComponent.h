#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_DecalComponent -FallbackName=SQEX_DecalComponent
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

