#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresProjectile_e_ex037_MagicSquare.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex037_MagicSquare : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_MoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HoveringHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HoveringSpeedRate;
    
    ATresProjectile_e_ex037_MagicSquare();
    UFUNCTION(BlueprintPure)
    float GetHoveringZ() const;
    
};

