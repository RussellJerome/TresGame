#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex027_Thundaga.generated.h"

class ATresProjectileGenerator_e_ex027_Thundaga;

UCLASS(HideDropdown)
class UTresAttack4_e_ex027_Thundaga : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex027_Thundaga> m_pro_ThundagaGeneratorClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_FireNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ThundagaInterval2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ThundagaInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ThundagaHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ThundagaPosRate;
    
public:
    UTresAttack4_e_ex027_Thundaga();
};

