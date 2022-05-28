#pragma once
#include "CoreMinimal.h"
#include "ex064WallPartsParameter.h"
#include "TresEnemyPawnBase.h"
#include "ex064ShipBodyParameter.h"
#include "ex064Parameter.h"
#include "TresEnemyPawn_e_ex064.generated.h"

class UTresSkeletalMeshComponent;
class ATresEnemyPawn_e_ex064_Wall;

UCLASS()
class ATresEnemyPawn_e_ex064 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* m_ShipBodyMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* m_ShipMastMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    Fex064ShipBodyParameter m_ShipParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    Fex064WallPartsParameter m_WallPartsParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    Fex064Parameter m_Param;
    
private:
    UPROPERTY(Transient)
    TArray<ATresEnemyPawn_e_ex064_Wall*> m_WallPartsList;
    
public:
    ATresEnemyPawn_e_ex064();
    UFUNCTION(BlueprintCallable)
    bool RequestWallPartsRespawn(float waitRespawnTime);
    
    UFUNCTION(BlueprintPure)
    int32 GetShipHP() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentWallPartsNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentWallPartsMaxNum() const;
    
    UFUNCTION(BlueprintCallable)
    void AddShipHP(int32 Value);
    
};

