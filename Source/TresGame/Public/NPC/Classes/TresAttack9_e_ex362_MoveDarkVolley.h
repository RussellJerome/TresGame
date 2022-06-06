#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresE_EX362DarkVolleyParam.h"
#include "TresAttack9_e_ex362_MoveDarkVolley.generated.h"

class ATresProjectileBase;
class UEnvQuery;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack9_e_ex362_MoveDarkVolley : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_Warp1EQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_Warp2EQSQuery;
    
    UPROPERTY(EditAnywhere)
    float m_Teleport1WaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_Teleport2WaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_EQSWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BulletNumMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_shotInterval;
    
    UPROPERTY(EditAnywhere)
    float m_VariationDegree;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_MoveBack;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_MoveBackEQSQuery;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackSpeedMax;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackDist;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackInitRate;
    
    UPROPERTY(EditAnywhere)
    float m_AfterMoveBackSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_OnlyAttack2;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_Attack2PitchZero;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_EX362DarkVolleyParam> m_sDarkVolleyParam;
    
private:
    UPROPERTY()
    UEnvQuery* m_WarpEQSQuery;
    
public:
    UTresAttack9_e_ex362_MoveDarkVolley();
};

