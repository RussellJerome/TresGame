#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack12_e_ex301_SwordThrow.generated.h"

class ATresProjectileBase;
class USoundBase;
class UEnvQuery;
class ATresEnemy_e_ex301_KeyBladeProjectileBase;

UCLASS(HideDropdown)
class UTresAttack12_e_ex301_SwordThrow : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_WarpTime;
    
    UPROPERTY(EditAnywhere)
    float m_WarpRange;
    
    UPROPERTY(EditAnywhere)
    float m_VelValue;
    
    UPROPERTY(EditAnywhere)
    float m_BrakeDistance;
    
    UPROPERTY(EditAnywhere)
    float m_InitSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_AccelSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_BlizzaganStartWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_FIraganStartWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_ThundaganStartWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_ThundaganStartTime;
    
    UPROPERTY(EditAnywhere)
    int32 m_ThundaganChildShotNum;
    
    UPROPERTY(EditAnywhere)
    float m_ThundaganChildStartTime;
    
    UPROPERTY(EditAnywhere)
    float m_ThundaganChildSIntervalTime;
    
    UPROPERTY(EditAnywhere)
    float m_ThundaganChildSafeRange;
    
    UPROPERTY(EditAnywhere)
    float m_ThundaganChildRandomRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_CalamityBlizProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_CalamityFireProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_CalamityThdProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_CalamityThdChildProjectile;
    
    UPROPERTY(EditAnywhere)
    float m_CalamityFireRange;
    
    UPROPERTY(EditAnywhere)
    float m_CalamityFireHigh;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_ReflectVoiceSEAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
private:
    UPROPERTY()
    ATresEnemy_e_ex301_KeyBladeProjectileBase* m_KeyBladeProjectile;
    
public:
    UTresAttack12_e_ex301_SwordThrow();
};

