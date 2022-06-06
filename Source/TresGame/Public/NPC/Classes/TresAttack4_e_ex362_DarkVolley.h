#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex362_DarkVolley.generated.h"

class ATresProjectileBase;
class USoundBase;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack4_e_ex362_DarkVolley : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
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
    
public:
    UTresAttack4_e_ex362_DarkVolley();
};

