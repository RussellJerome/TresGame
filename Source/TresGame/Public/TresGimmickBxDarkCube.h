#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickBxDarkCube.generated.h"

class UTresSpawnActorManagerComponent;

UCLASS()
class ATresGimmickBxDarkCube : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_CheckSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTresSpawnActorManagerComponent* SpawnActorManager;
    
    ATresGimmickBxDarkCube();
    UFUNCTION(BlueprintCallable)
    void SetEnableAttack(bool bEnable, const FName InGroupName, float InAttackInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetBallSize(float fBallSize);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackTeamNo(int32 InTeamNo);
    
    UFUNCTION()
    void NotifyChangeGimmickPause(bool bPause);
    
    UFUNCTION(BlueprintPure)
    bool DarkcubeCanbeMovable() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeGimmickPause(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    FRotator CalcMovementToRot(FRotator BaseRotator, FVector vel, float fRadius);
    
};

