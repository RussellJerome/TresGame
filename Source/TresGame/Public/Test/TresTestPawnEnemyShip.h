#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresTestPawnEnemyShip.generated.h"

class UTresStaticMeshComponent;

UCLASS()
class ATresTestPawnEnemyShip : public ATresCharPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_Mesh1;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_Mesh2;
    
public:
    ATresTestPawnEnemyShip();
};

