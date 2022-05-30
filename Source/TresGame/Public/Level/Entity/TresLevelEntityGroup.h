#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresLevelEntityGroup.generated.h"

class UTresLevelEntityManager;

UCLASS(Transient)
class TRESGAME_API UTresLevelEntityGroup : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresLevelEntityManager* m_Manager;
    
public:
    UTresLevelEntityGroup();
};

