#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipProjectileDataTable.generated.h"

class UParticleSystem;

USTRUCT()
struct FTresGumiShipProjectileDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackDataName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMovementSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDoHomingInDegree;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vScale;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pMuzzleFlashEffect;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDoWarpHitLocation: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTargetLocationPredictable: 1;
    
    TRESGAME_API FTresGumiShipProjectileDataTable();
};

