#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ETresAIActionAbortTimingID.h"
#include "TresAttack4_e_ex360_TeleportCutDown.generated.h"

class UEnvQuery;
class ATresEnemyPawn_e_ex360;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex360_TeleportCutDown : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_TeleportHight;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsBackAttack;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_UseAvatar;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TeleportWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MotStopWaitTIme;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpDist;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_NotBlizzard;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_WarpEnd;
    
    UPROPERTY(EditDefaultsOnly)
    ETresAIActionAbortTimingID m_RevengeActionAbortTimingID;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex360* m_AvaterPawn;
    
public:
    UTresAttack4_e_ex360_TeleportCutDown();
};

