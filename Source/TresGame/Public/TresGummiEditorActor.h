#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresGummiEditorActor.generated.h"

class USkeletalMesh;
class UMaterialInterface;
class USceneComponent;
class UStaticMeshComponent;
class USkeletalMeshComponent;
class UMaterialInstanceDynamic;
class UTresGummiEditorDataTableSet;
class USceneCaptureComponent2D;

UCLASS()
class ATresGummiEditorActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USkeletalMesh* m_pStaticMesh_Center;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* m_pStaticMesh_Cursor;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* m_pStaticMesh_StickerCursor;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* m_pMesh_StickerPlaneCursor;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* m_pStaticMesh_BaseGrid;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* m_pStaticMesh_TinyBaseGrid;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* m_pStaticMesh_Arrow;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* m_pStaticMesh_TinyArrow;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* m_pMesh_GummiLine;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* m_pMesh_TinyLine;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_pGummiStickerMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_pGummiLineMaterial0;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_pGummiLineMaterial1;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_pTinyLineMaterial0;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_pTinyLineMaterial1;
    
private:
    UPROPERTY(Export)
    USceneComponent* m_pSceneComponent;
    
    UPROPERTY(Export)
    USceneComponent* m_pAttachRootComponent;
    
    UPROPERTY(Export)
    USceneComponent* m_pAttachPartsRootComponent;
    
    UPROPERTY(Export)
    UStaticMeshComponent* m_pRootComponent;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* m_pBaseGridComponent;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* m_pArrowComponentUp;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* m_pArrowComponentDown;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* m_pLineComponentUD;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* m_pLineComponentLR;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* m_pLineComponentFB;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* m_pCursorComponent;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* m_pCenterComponent;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* m_pStickerCursorComponent;
    
    UPROPERTY(EditAnywhere, Export)
    USkeletalMeshComponent* m_pStickerPlaneComponent;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_pGummiLineElement0_UD;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_pGummiLineElement1_UD;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_pTinyLineElement0_UD;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_pTinyLineElement1_UD;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_pGummiLineElement0_LR;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_pGummiLineElement1_LR;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_pTinyLineElement0_LR;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_pTinyLineElement1_LR;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_pGummiLineElement0_FB;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_pGummiLineElement1_FB;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_pTinyLineElement0_FB;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_pTinyLineElement1_FB;
    
    UPROPERTY()
    FRotator m_BaseGridRotater;
    
    UPROPERTY()
    UTresGummiEditorDataTableSet* m_pGummiEditorDataTableSet;
    
    UPROPERTY(EditAnywhere, Export)
    USceneCaptureComponent2D* m_pCaptureComponent;
    
public:
    ATresGummiEditorActor();
};

