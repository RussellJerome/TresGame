#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DarkVolleyNumTypes_e_ex325.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex325_DarkVolley.generated.h"

class ATresProjectileBase;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex325_DarkVolley : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<DarkVolleyNumTypes_e_ex325> m_DarkVolleyNumType;
    
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
    
public:
    UTresAttack3_e_ex325_DarkVolley();
};

