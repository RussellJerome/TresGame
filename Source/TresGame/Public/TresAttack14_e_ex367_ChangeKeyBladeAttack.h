#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack14_e_ex367_ChangeKeyBladeAttack.generated.h"

class ATresEnemy_e_ex367_KeyBladeLaserProjectileBase;
class ATresProjectileBase;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack14_e_ex367_ChangeKeyBladeAttack : public UTresAttackDefinitionBase {
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
    
    UPROPERTY(EditDefaultsOnly)
    bool m_OnlyKeyBlade;
    
private:
    UPROPERTY()
    ATresEnemy_e_ex367_KeyBladeLaserProjectileBase* m_KeyBladeLaserProj;
    
public:
    UTresAttack14_e_ex367_ChangeKeyBladeAttack();
};

