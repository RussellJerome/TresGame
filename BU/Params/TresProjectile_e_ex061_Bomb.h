#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex061_Bomb.generated.h"

class USceneComponent;

UCLASS(Abstract)
class ATresProjectile_e_ex061_Bomb : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* m_BombMesh;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vRotAxis;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotAxisDeviation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotVel;
    
    ATresProjectile_e_ex061_Bomb();
};
