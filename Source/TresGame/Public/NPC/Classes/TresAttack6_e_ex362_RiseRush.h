#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack6_e_ex362_RiseRush.generated.h"

class UTresStateBase;
class UEnvQuery;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack6_e_ex362_RiseRush : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_BuddyState;
    
    UPROPERTY(EditAnywhere)
    bool m_IsDoCancel;
    
    UPROPERTY(EditAnywhere)
    float m_RotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_MoveBack;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_InvisibleTerra;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_MoveBackEQSQuery;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackSpeedMax;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackDist;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackInitRate;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackAddSpdRate;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackSlowSpdRate;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackRotRate;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackUpdateRotTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_PlayVoice;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
public:
    UTresAttack6_e_ex362_RiseRush();
};

