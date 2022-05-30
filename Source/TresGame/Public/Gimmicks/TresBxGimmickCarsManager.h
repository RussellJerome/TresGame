#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSpaceDivisionManager.h"
#include "TresBxGimmickCarsManager.generated.h"

class USceneComponent;
class AActor;
class ATresCharPawnBase;

UCLASS(Abstract)
class ATresBxGimmickCarsManager : public ATresGimmickSpaceDivisionManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* MyRoot;
    
    UPROPERTY(EditAnywhere)
    FName GameFlagName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> NoLightsFlagName;
    
    UPROPERTY(EditAnywhere)
    int32 CarLODIndex;
    
    ATresBxGimmickCarsManager();
    UFUNCTION(BlueprintCallable)
    void SetStopCars(bool bStop);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnorePause(bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void RemoveObstacleObject(AActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    void RegistObstacleObject(AActor* pActor, bool bMovable, float fBoundsRadius);
    
    UFUNCTION()
    void OnMovePawnDelete(ATresCharPawnBase* InTargetPawn);
    
    UFUNCTION()
    void OnMovePawnCreate(ATresCharPawnBase* InTargetPawn);
    
    UFUNCTION()
    void NotifyChangeGimmickPause(bool bPause);
    
};

