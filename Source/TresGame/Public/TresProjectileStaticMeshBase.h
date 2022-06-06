#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresEffectUnit.h"
#include "TresProjectileStaticMeshBase.generated.h"

class UTresStaticMeshComponent;
class UTresEffectAttachComponent;

UCLASS(Abstract)
class ATresProjectileStaticMeshBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleDefaultsOnly)
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(Export, VisibleAnywhere)
    UTresEffectAttachComponent* m_EffectAttach;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_fVisibleDelay;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_RespawnCount;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresProjectileBase>> m_ReSpawnProjectilesClassAry;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEffectUnit> MyLifeOverEffects;
    
public:
    ATresProjectileStaticMeshBase();
};

