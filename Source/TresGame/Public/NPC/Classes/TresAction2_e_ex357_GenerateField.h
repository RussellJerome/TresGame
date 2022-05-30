#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAction_e_ex357_Base.h"
#include "ETresEnemyFieldSize_e_ex357.h"
#include "TresAction2_e_ex357_GenerateField.generated.h"

class ATresFieldProjectile_e_ex357;
class ATresProjectileBase;
class UTresFieldGenerateParamBase_e_ex357;
class UTresFieldAttackParamBase_e_ex357;
class USoundBase;

UCLASS(HideDropdown)
class UTresAction2_e_ex357_GenerateField : public UTresAction_e_ex357_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyFieldSize_e_ex357::Type> m_FieldSizeType;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresFieldProjectile_e_ex357> m_FieldClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UTresFieldGenerateParamBase_e_ex357* m_GenerateParam;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UTresFieldAttackParamBase_e_ex357* m_AttackParam;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceDataList;
    
public:
    UTresAction2_e_ex357_GenerateField();
};

