#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresProjectionGridComponent.generated.h"

class UMaterialInterface;
class ACameraActor;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresProjectionGridComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_pGridMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_pOpaqueMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_pMaskedMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* m_pTranslucencyMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_GridSizeX;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_GridSizeY;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_DivisionNum;
    
    UPROPERTY(EditAnywhere)
    float m_Amplitude;
    
    UPROPERTY(EditAnywhere)
    float m_ProjectionZ;
    
    UPROPERTY(EditAnywhere)
    float m_TranslucentDistance;
    
    UPROPERTY(EditAnywhere)
    float m_BlendDistance;
    
    UPROPERTY(EditAnywhere)
    bool m_DebugDraw;
    
    UPROPERTY(EditAnywhere)
    bool m_FreezingUpdate;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ACameraActor> m_pDebugCameraActor;
    
    UTresProjectionGridComponent();
};

