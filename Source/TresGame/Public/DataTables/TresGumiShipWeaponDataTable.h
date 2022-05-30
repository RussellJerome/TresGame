#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "TresGumiShipWeaponDataTable.generated.h"

class ATresGumiShipProjectileBase;

USTRUCT()
struct FTresGumiShipWeaponDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fShootPerSecond;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDelayTimeOfStartShoot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDispersion;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRollDispersion;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fForwardOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresGumiShipProjectileBase> m_ProjectileType;
    
    TRESGAME_API FTresGumiShipWeaponDataTable();
};

