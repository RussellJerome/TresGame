#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresFieldAddProjectileParam_e_ex357.h"
#include "TresProjectileBase.h"
#include "ETresAttributeHitEnd_e_ex357.h"
#include "ETresDamageAttribute.h"
#include "TresFieldProjectile_e_ex357.generated.h"

class UTresBodyCollComponent;
class ATresSignProjectile_e_ex357_Base;

UCLASS()
class ATresFieldProjectile_e_ex357 : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* MyBodyColl;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Radius;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_EnableSpawnProjectileTurnTarget: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresSignProjectile_e_ex357_Base> m_AddProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresFieldAddProjectileParam_e_ex357> m_AddProjectileParamList;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresAttributeHitEnd_e_ex357::Type> m_AttributeHitEndType;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<ETresDamageAttribute> m_HitAttributeList;
    
public:
    ATresFieldProjectile_e_ex357();
};

