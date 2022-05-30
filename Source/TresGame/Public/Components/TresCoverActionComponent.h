#pragma once
#include "CoreMinimal.h"
#include "TresGimmickComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "TresCollShapeAssetUnit.h"
#include "ETresCoverIdlingDirID.h"
#include "TresCoverActionComponent.generated.h"

class UBodySetup;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresCoverActionComponent : public UTresGimmickComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FColor m_ShapeColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 m_bDrawBBox: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FColor m_BBoxColor;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresCollShapeAssetUnit> m_CollisionShapesSrc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresCoverIdlingDirID m_IdlingDir;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bEnableCoverDir: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bEnableSlideLockon: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bEnableSlideShotForcedDirection: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_CoverCameraID;
    
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* m_pBodySetup;
    
public:
    UTresCoverActionComponent();
};

