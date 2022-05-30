#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex901_RailSlideBase.h"
#include "TresProjectile_e_bx901_DarkCubeMineInterface.h"
#include "TresProjectile_e_bx901_DarkCubeMine.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_bx901_DarkCubeMine : public ATresProjectile_e_ex901_RailSlideBase, public ITresProjectile_e_bx901_DarkCubeMineInterface {
    GENERATED_BODY()
public:
    ATresProjectile_e_bx901_DarkCubeMine();
    
    // Fix for true pure virtual functions not being implemented
};

