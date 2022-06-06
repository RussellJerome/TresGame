#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickTS_01_BedCollisionDMatParam.h"
#include "TresGimmickTS_01_BedCollision.generated.h"

class USceneComponent;
class UTresStaticMeshComponent;
class UMaterialInterface;

UCLASS(Abstract, Config=Game)
class ATresGimmickTS_01_BedCollision : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyCollBound;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyCollFlat;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DynamicMaterialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTresGimmickTS_01_BedCollisionDMatParam> m_DynamicMaterials;
    
    ATresGimmickTS_01_BedCollision();
protected:
    UFUNCTION()
    void OnChangeBattleMode(bool bIsBattleMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void BP_ChangeMaterialToMyMesh(int32 Index, UMaterialInterface* Material);
    
};

