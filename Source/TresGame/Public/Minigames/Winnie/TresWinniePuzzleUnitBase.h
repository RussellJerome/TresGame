#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "WinniePuzzleUnitType.h"
#include "TresWinniePuzzleUnitBase.generated.h"

class ATresWinniePuzzleCollisionUnit;

UCLASS(Abstract)
class ATresWinniePuzzleUnitBase : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleUnitType UnitTypeRef;
    
    UPROPERTY(Transient)
    ATresWinniePuzzleCollisionUnit* m_pCollisionUnit;
    
public:
    ATresWinniePuzzleUnitBase();
};

