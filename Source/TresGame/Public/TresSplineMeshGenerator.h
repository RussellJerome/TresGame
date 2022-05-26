#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorBase.h"
#include "TresSplineMeshExtensionStaticMeshInfo.h"
#include "TresSplineMeshGenerator.generated.h"

class ASQEX_SplineActor;
class UStaticMesh;
class USplineMeshComponent;

UCLASS(Abstract)
class ATresSplineMeshGenerator : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASQEX_SplineActor* FirstSplineActor;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FTresSplineMeshExtensionStaticMeshInfo> MeshInfoArray;
    
    UPROPERTY(EditInstanceOnly)
    ASQEX_SplineActor* EndSplineActor;
    
public:
    ATresSplineMeshGenerator();
    UFUNCTION(BlueprintCallable)
    void Create(ASQEX_SplineActor* splineActor, UStaticMesh* StaticMesh, UStaticMesh* collisionStaticMesh);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SetupMesh(USplineMeshComponent* Mesh, bool isEnableCollision, float Length);
    
    UFUNCTION(BlueprintImplementableEvent)
    USplineMeshComponent* BP_GenerateMesh();
    
};

