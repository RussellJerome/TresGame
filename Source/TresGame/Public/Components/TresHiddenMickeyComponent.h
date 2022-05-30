#pragma once
#include "CoreMinimal.h"
#include "TresDetectMarkerComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "HiddenMickeyBoundingAreaCircles.h"
#include "TresHiddenMickeyComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresHiddenMickeyComponent : public UTresDetectMarkerComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_MarkID;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bUseDefaultDetectMarkerBoundingAreaOnly: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bUseAccurateBoundingArea: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D m_MickeyMarkSizeRectangle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<FHiddenMickeyBoundingAreaCircles> m_MickeyMarkSizeCircles;
    
public:
    UTresHiddenMickeyComponent();
    UFUNCTION(BlueprintPure)
    bool IsLuckyMarkRecorded() const;
    
};

