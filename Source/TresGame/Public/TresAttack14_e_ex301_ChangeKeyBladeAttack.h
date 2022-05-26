#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack14_e_ex301_ChangeKeyBladeAttack.generated.h"

class ATresProjectileBase;
class USoundBase;
class ATresEnemy_e_ex301_KeyBladeLaserProjectileBase;

UCLASS()
class UTresAttack14_e_ex301_ChangeKeyBladeAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_KeyBladeProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotRot;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
private:
    UPROPERTY()
    ATresEnemy_e_ex301_KeyBladeLaserProjectileBase* m_KeyBladeLaserProj;
    
public:
    UTresAttack14_e_ex301_ChangeKeyBladeAttack();
};

