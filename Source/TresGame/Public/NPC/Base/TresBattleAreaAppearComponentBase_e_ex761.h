#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex761_Weapon.h"
#include "Components/SceneComponent.h"
#include "TresBattleAreaAppearComponentBase_e_ex761.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresBattleAreaAppearComponentBase_e_ex761 : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<ETresEnemy_e_ex761_Weapon::Type> m_WeaponType;
    
public:
    UTresBattleAreaAppearComponentBase_e_ex761();
};

