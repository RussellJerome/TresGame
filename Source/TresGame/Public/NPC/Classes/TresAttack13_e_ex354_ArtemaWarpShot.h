#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX354_ArtemaWarpShotSet.h"
#include "TresAttack13_e_ex354_ArtemaWarpShot.generated.h"

class UEnvQuery;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack13_e_ex354_ArtemaWarpShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bDisableLockon;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStartHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFirstShotWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX354_ArtemaWarpShotSet> m_ArtemaWarpShotSetArray;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCallEndEventTime;
    
    UPROPERTY()
    bool m_bCallEndEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EqsArray[5];
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iUdekeshiEffectGroupID;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_UdekeshiParamName;
    
    UPROPERTY()
    TArray<ATresProjectileBase*> m_SpawnerArray;
    
    UTresAttack13_e_ex354_ArtemaWarpShot();
};

