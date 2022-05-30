#pragma once
#include "CoreMinimal.h"
#include "TresGimmickComponentBase.h"
#include "ETresReactorCommandID.h"
#include "UObject/NoExportTypes.h"
#include "TresReactorComponentInterface.h"
#include "TresCollShapeAssetUnit.h"
#include "TresReactorDoCommandSignatureDelegate.h"
#include "TresReactorComponent.generated.h"

class UBodySetup;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresReactorComponent : public UTresGimmickComponentBase, public ITresReactorComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FColor m_ShapeColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 m_bDrawBBox: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FColor m_BBoxColor;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresCollShapeAssetUnit> m_CollisionShapesSrc;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bLimitRotRange: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_RotRangeProp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bNeedRayCheck: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETresReactorCommandID m_Command;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    AActor* m_CmdTargetActor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bDisableTargetMarker: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_bDisableCommandDisp: 1;
    
protected:
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* m_pBodySetup;
    
public:
    UPROPERTY(BlueprintAssignable)
    FTresReactorDoCommandSignature OnReactorDoCommand;
    
    UTresReactorComponent();
    
    // Fix for true pure virtual functions not being implemented
};

