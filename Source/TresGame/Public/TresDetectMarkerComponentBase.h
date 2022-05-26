#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickComponentBase.h"
#include "TresCollShapeAssetUnit.h"
#include "UObject/NoExportTypes.h"
#include "TresDetectMarkerComponentBase.generated.h"

class UActorComponent;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDetectMarkerComponentBase : public UTresGimmickComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bDetectValid: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bValidWhenOwnerVisible: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bLimitRotRange: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RotRangeProp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RotRangePropHintRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bLimitRollRange: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RollRangeProp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RollRangePropHintRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ValidDistanceMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ValidDistanceMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ValidDistanceMaxHintRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ValidScreenRatioMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ValidScreenRatioMinHintRate;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresCollShapeAssetUnit> m_CollisionShapesSrc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<AActor*> m_RaycastIgnoreList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_RaycastIgnoreTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bRaycastIgnoreNpc: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_HintFrameRatio;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FColor m_MarkerSphereColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 m_bDrawLimitRotRange: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FColor m_LimitRotRangeColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FColor m_CollisionColor;
    
    UPROPERTY()
    TArray<FVector> m_CheckPointList;
    
private:
    UPROPERTY(Export)
    TArray<UActorComponent*> m_ValidAreaBox;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> m_RaycastIgnoreTagList;
    
public:
    UTresDetectMarkerComponentBase();
    UFUNCTION(BlueprintCallable)
    void SetDetectValid(bool bValid);
    
    UFUNCTION(BlueprintPure)
    bool IsDetectValid() const;
    
};

