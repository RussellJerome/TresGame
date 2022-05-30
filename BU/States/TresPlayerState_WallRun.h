#pragma once
#include "CoreMinimal.h"
#include "TresCharState_WallRun.h"
#include "TresPlayerState_WallRun.generated.h"

class AActor;
class UPrimitiveComponent;
class ATresCameraWall;

UCLASS()
class UTresPlayerState_WallRun : public UTresCharState_WallRun {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* m_pHitActor;
    
    UPROPERTY(Export)
    UPrimitiveComponent* m_pHitComponent;
    
    UPROPERTY()
    ATresCameraWall* m_Camera;
    
    UTresPlayerState_WallRun();
};

