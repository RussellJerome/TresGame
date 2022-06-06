#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectileSkeletalMeshBase.generated.h"

class USQEX_ParticleAttachDataAsset;
class UTresSkeletalMeshComponent;
class UTresEffectAttachComponent;

UCLASS(Abstract)
class ATresProjectileSkeletalMeshBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleDefaultsOnly)
    UTresSkeletalMeshComponent* MyMesh;
    
    UPROPERTY(Export, VisibleAnywhere)
    UTresEffectAttachComponent* m_EffectAttach;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_AttachEffectGroupID;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_AttachData;
    
public:
    ATresProjectileSkeletalMeshBase();
};

