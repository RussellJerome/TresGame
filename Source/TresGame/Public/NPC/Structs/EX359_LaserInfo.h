#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EEX359_SpawnDirType.h"
#include "EEX359_SpawnLocType.h"
#include "UObject/NoExportTypes.h"
#include "EX359_LaserInfo.generated.h"

class ATresProjectile_e_ex359_LaserBase;

USTRUCT(BlueprintType)
struct FEX359_LaserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iNotify;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex359_LaserBase> m_pProjClass;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vSpawnLocOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bPolarSpawnLocOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX359_SpawnLocType> m_SpawnLocType;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX359_SpawnDirType> m_SpawnDirType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpawnDirYawOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLifeTime;
    
    UPROPERTY()
    bool m_bLifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIgnoreSameIndexHit;
    
    TRESGAME_API FEX359_LaserInfo();
};

