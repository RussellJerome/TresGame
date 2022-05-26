#pragma once
#include "CoreMinimal.h"
#include "TresDetectMarkerComponentBase.h"
#include "ETresSevenPrincessType.h"
#include "TresDetectCollShapeAssetUnit2D.h"
#include "TresPhotoMissionComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPhotoMissionComponent : public UTresDetectMarkerComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_PhotoMissionID;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bSevenPrincess: 1;
    
    UPROPERTY(EditAnywhere)
    ETresSevenPrincessType m_PrincessType;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bDevilWaveEffect: 1;
    
    UPROPERTY(EditAnywhere)
    int32 m_DevilWaveEffectCheckCount;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresDetectCollShapeAssetUnit2D> m_CollisionShapesSrc2D;
    
public:
    UTresPhotoMissionComponent();
};

