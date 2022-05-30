#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex313_DarkMine.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack3_e_ex313_DarkMine : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_DarkMineNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMineRotYawLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMineDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMineRandomOffsetDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMineBombDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMineBombTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMineBombTime2;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDestination;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_DarkMineEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_RevengeWarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DarkMineVoiceID;
    
public:
    UTresAttack3_e_ex313_DarkMine();
};

