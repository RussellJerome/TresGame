#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex113.generated.h"

class UTresSkeletalMeshComponent;

UCLASS()
class ATresEnemyPawn_e_ex113 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* ThornMesh;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpDitherInterpTime;
    
public:
    ATresEnemyPawn_e_ex113();
    UFUNCTION(Exec)
    void SpawnChild();
    
    UFUNCTION()
    void DebugSetCoopNumProjectile(int32 Num);
    
};

