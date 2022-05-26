#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex004_WaterUpper.generated.h"

class UTresDecalComponent;
class UMaterial;

UCLASS(HideDropdown)
class UTresAttack3_e_ex004_WaterUpper : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UTresDecalComponent* m_pSpawnDecal;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UMaterial* m_pro_DecalMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WaterAppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WaterHomingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WaterHomingRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WaterUpperAppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_InitTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AddTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MaxTurnSpeed;
    
public:
    UTresAttack3_e_ex004_WaterUpper();
};

