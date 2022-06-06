#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresOceanShaderController.generated.h"

class ACameraActor;
class USceneComponent;
class UBillboardComponent;
class UMaterialInterface;
class UStaticMeshComponent;
class UStaticMesh;
class UMaterialParameterCollection;
class UTexture2D;

UCLASS(Config=Game)
class ATresOceanShaderController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* m_SceneComponent;
    
    UPROPERTY(Export)
    UBillboardComponent* m_SpriteComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_pGridMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> m_pOpaqueMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> m_pMaskedMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> m_pTranslucencyMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_UseMaterialIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* m_pProjectionMesh0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* m_pProjectionMesh1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* m_pProjectionMesh2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* m_pProjectionMesh3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* m_pProjectionMesh4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* m_pProjectionMesh5;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* m_pProjectionMesh6;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* m_pProjectionMesh7;
    
    UPROPERTY(Export)
    UStaticMeshComponent* m_pProjectionMeshOpaq[8];
    
    UPROPERTY(Export)
    UStaticMeshComponent* m_pProjectionMeshTrans[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TranslucencySortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CustomTranslucencySortPriorityEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SQEXGhostDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialParameterCollection* m_pMatParamCollection;
    
    UPROPERTY(EditAnywhere)
    float m_SafetyArea;
    
    UPROPERTY(EditAnywhere)
    float m_SafetyFOVScale;
    
    UPROPERTY(EditAnywhere)
    float m_Amplitude;
    
    UPROPERTY(EditAnywhere)
    float m_ProjectionZ;
    
    UPROPERTY(EditAnywhere)
    float m_TranslucentDistance;
    
    UPROPERTY(EditAnywhere)
    float m_BlendDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SkyIntensity;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ACameraActor> m_pDebugCameraActor;
    
    UPROPERTY(EditAnywhere)
    bool m_DebugDraw;
    
    UPROPERTY(EditAnywhere)
    bool m_FreezingUpdate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> m_pOpaqueMaterialReplace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> m_pMaskedMaterialReplace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMaterialInterface*> m_pTranslucencyMaterialReplace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialParameterCollection* m_IslandLocationParamCollection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* m_DefaultHeightMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DefaultPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DefaultContrast;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D m_DefaultIslandRangeMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D m_DefaultIslandRangeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialParameterCollection* m_pOceanMatParamCollection;
    
    ATresOceanShaderController();
};

