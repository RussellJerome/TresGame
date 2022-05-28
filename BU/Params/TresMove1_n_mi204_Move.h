#pragma once
#include "CoreMinimal.h"
#include "TresNpcLocomotionDefinitionLand.h"
#include "TresMove1_n_mi204_Move.generated.h"

class UEnvQuery;

UCLASS()
class UTresMove1_n_mi204_Move : public UTresNpcLocomotionDefinitionLand {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpStartPathDistance;
    
public:
    UTresMove1_n_mi204_Move();
};

