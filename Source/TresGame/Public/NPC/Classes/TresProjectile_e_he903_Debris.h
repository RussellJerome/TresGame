#pragma once
#include "CoreMinimal.h"
#include "TresProjectileStaticMeshBase.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_he903_Debris.generated.h"

class USceneComponent;

UCLASS(Abstract)
class ATresProjectile_e_he903_Debris : public ATresProjectileStaticMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* m_BombMesh;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* m_BombMesh_Static;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* MyRot;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vRotAxis;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotAxisDeviation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotVel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fScaleTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bReflectToOwner;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bParticleRotSync;
    
    ATresProjectile_e_he903_Debris();
};

