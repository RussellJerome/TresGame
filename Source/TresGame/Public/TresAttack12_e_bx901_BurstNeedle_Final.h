#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "BX901_NeedleRainInfo.h"
#include "BX901_NeedleSpawnerInfo.h"
#include "TresAttack12_e_bx901_BurstNeedle_Final.generated.h"

UCLASS(HideDropdown)
class UTresAttack12_e_bx901_BurstNeedle_Final : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FBX901_NeedleRainInfo m_NeedleRainInfo;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxNeedleNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDownLocationWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDownLocationDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDownLocationVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxDownCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDownSpawnInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDownSpawnLoc;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDownSpawnBackStartTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDownSpawnBackEndTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDownSpawnBackTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FBX901_NeedleSpawnerInfo m_NeedleSpawnerInfo;
    
    UTresAttack12_e_bx901_BurstNeedle_Final();
};

