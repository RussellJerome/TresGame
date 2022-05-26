#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex358_Base.h"
#include "ETresEnemyNaruikazuchi_e_ex358.h"
#include "TresNaruikazuchiProjectileGenerateParam.h"
#include "TresAttack4_e_ex358_Naruikazuchi.generated.h"

class ATresProjectileManager_e_ex358_Naruikazuchi;

UCLASS(HideDropdown)
class UTresAttack4_e_ex358_Naruikazuchi : public UTresAttack_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyNaruikazuchi_e_ex358::Type> m_NaruikazuchiType;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileManager_e_ex358_Naruikazuchi> m_ProjectileManagerClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileGenerateStartDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FTresNaruikazuchiProjectileGenerateParam m_ProjectileGenerateParam;
    
public:
    UTresAttack4_e_ex358_Naruikazuchi();
};

