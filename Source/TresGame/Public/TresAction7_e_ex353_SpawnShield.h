#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAction7_e_ex353_SpawnShield.generated.h"

UCLASS(HideDropdown)
class UTresAction7_e_ex353_SpawnShield : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsOnlySpawnLocationList: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CanSpawnTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_Offset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShieldSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShieldLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShieldEnableColTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShieldHitAfterLifeTime;
    
    UTresAction7_e_ex353_SpawnShield();
};

