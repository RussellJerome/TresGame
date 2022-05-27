#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex311_TeleportCutDown.generated.h"

class UEnvQuery;
class ATresEnemyXIIIPawnBase;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex311_TeleportCutDown : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_TeleportHight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TeleportPosOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsBackAttack;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_UseAvatar;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TeleportWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyXIIIPawnBase> m_Avatar;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsCoopAction;
    
public:
    UTresAttack4_e_ex311_TeleportCutDown();
};

