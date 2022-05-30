#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "EEX359_SpawnDirType.h"
#include "EEX359_SpawnLocType.h"
#include "EX359_BeamMoveInfoSet.h"
#include "EX359_BeamInfo.generated.h"

class ATresProjectile_e_ex359_BeamBase;

USTRUCT(BlueprintType)
struct FEX359_BeamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_iNotify;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex359_BeamBase> m_pProjClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex359_BeamBase> m_pProjClass_FinalBrake;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vSpawnLocOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bPolarSpawnLocOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpawnLocPolarYawOffset;
    
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
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_BeamMoveInfoSet m_MoveInfoSet;
    
    TRESGAME_API FEX359_BeamInfo();
};

