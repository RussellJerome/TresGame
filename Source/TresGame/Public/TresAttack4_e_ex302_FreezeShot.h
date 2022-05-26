#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_XIIIE_Base.h"
#include "TresEnemyEx302ProjectileSpawnInfo.h"
#include "TresAttack4_e_ex302_FreezeShot.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex302_FreezeShot : public UTresAttack_XIIIE_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_FreezeShotAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnAngle;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEx302ProjectileSpawnInfo> m_SpawnInfos;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_FreezeShotProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsCooperationFreezeShot: 1;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_CooperationVoice;
    
    UTresAttack4_e_ex302_FreezeShot();
};

