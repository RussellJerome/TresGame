#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack8_e_ex781_WarpGunShot.generated.h"

class USoundBase;
class ATresPawnBase;
class ATresEnemyPawn_e_ex781_GunShotMarker;
class ATresProjectileBase;

UCLASS()
class UTresAttack8_e_ex781_WarpGunShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPawnBase> m_GunShotMarkerObjectClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchAddStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchAddRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchRateMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AbortDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinHigh;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex781_GunShotMarker* m_GunShotMarkerObject;
    
    UPROPERTY()
    ATresProjectileBase* m_Projectile;
    
public:
    UTresAttack8_e_ex781_WarpGunShot();
};

