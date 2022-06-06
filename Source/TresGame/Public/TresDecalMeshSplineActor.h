#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresDecalMeshSplineActor.generated.h"

class USceneComponent;
class ATresLateralProjectionDecalActor;
class USplineComponent;
class UStaticMesh;
class UPrimitiveComponent;
class UMaterialInstanceDynamic;

UCLASS(Config=Game)
class ATresDecalMeshSplineActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ATresLateralProjectionDecalActor> m_LateralDecalActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UStaticMesh*> m_SplineMeshArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* m_SplineMeshPointStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* m_SplineMeshPointEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* m_SplineMeshPointStartEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_Offset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_EnableNormalOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_EnableMeshRoll;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_EnableSplineMeshReciveDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D m_SplineMeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D m_SplineMeshScaleRandOffsetMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D m_SplineMeshScaleRandOffsetMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DecaleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DecaleHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DecaleScaleRandOffsetMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DecaleScaleRandOffsetMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_EnableWorldDistanceFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MeshFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MeshFadeOutWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MeshFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MeshBaseLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DecalDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DecalFadeinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DecalFadeOutWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DecalFadeoutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ForceKillTime;
    
private:
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> m_MIDArray;
    
    UPROPERTY(Export)
    TArray<USceneComponent*> m_SceneComponents;
    
    UPROPERTY()
    AActor* m_LastSpawnActor;
    
    UPROPERTY()
    AActor* m_CurrentParentActor;
    
    UPROPERTY()
    AActor* m_PrevParentActor;
    
    UPROPERTY(Export)
    UPrimitiveComponent* m_PrevHitComponent;
    
public:
    ATresDecalMeshSplineActor();
    UFUNCTION(BlueprintCallable)
    void SetMaterialControlLocation(FVector inWorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void AddSplinePoint(const FVector& inWorldLocation, FVector inHitLocation, FVector inWorldNormal, bool inIsEnable, FHitResult in_pHitRes);
    
};

