#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_Gigas_BulletParam.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack6_GigasBase_UltimaModeBomb.generated.h"

UCLASS(HideDropdown)
class UTresAttack6_GigasBase_UltimaModeBomb : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_pro_BaseBombRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRotator> m_pro_BombRot;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingEndAddDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> m_pro_HomingIntervalRightArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> m_pro_HomingIntervalLeftArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_Gigas_BulletParam> m_pro_HomingRightArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemy_e_Gigas_BulletParam> m_pro_HomingLeftArray;
    
public:
    UTresAttack6_GigasBase_UltimaModeBomb();
};

