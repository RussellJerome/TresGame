#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIIEPawnBase.h"
#include "Engine/EngineTypes.h"
#include "TresEnemyPawn_e_ex316.generated.h"

class AActor;
class ATresProjectileGenerator_e_ex313_DarkMine;
class UPrimitiveComponent;
class USphereComponent;
class UTresAction1_e_ex316_Warp;

UCLASS()
class ATresEnemyPawn_e_ex316 : public ATresEnemyXIIIEPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileGenerator_e_ex313_DarkMine> m_pro_DarkMineGeneratorClass;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* MyPullCollisionComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAction1_e_ex316_Warp> m_WarpActionData;
    
protected:
    UPROPERTY()
    ATresProjectileGenerator_e_ex313_DarkMine* m_DarkMineManager;
    
public:
    ATresEnemyPawn_e_ex316();
    UFUNCTION()
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

