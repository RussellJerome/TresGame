#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamInfo.h"
#include "EEX359_SpawnDirType.h"
#include "EX359_LaserRainTriangleGuardInfoSet.h"
#include "EX359_GuardBeamInfoSet.generated.h"

class ATresCharPawnBase;
class AActor;
class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FEX359_GuardBeamInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEX359_BeamInfo m_BeamInfo;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpawnWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iBeamSpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotateAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotateMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpreadWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpreadTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpreadRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOpenWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOpenTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOpenRadius;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX359_SpawnDirType> m_OpenDirType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOpenDirOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOpenDirDetermineTime;
    
    UPROPERTY()
    bool m_bDetermineOpenDirByTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iOpenBeamNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fShotWaitTime;
    
protected:
    UPROPERTY()
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY()
    AActor* m_Target;
    
    UPROPERTY()
    AActor* m_SpawnActor;
    
    UPROPERTY()
    TArray<ATresProjectileBase*> m_ProjArray;
    
    UPROPERTY()
    FEX359_LaserRainTriangleGuardInfoSet m_GuardInfoSet;
    
public:
    TRESGAME_API FEX359_GuardBeamInfoSet();
};

