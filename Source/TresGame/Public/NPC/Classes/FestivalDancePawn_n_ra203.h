#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresRaDanceSplineInterface.h"
#include "ETresRaDanceAreaType.h"
#include "FestivalDancePawn_n_ra203.generated.h"

class ATresPlayerControllerBase;
class ATresRaFestivalDanceManager;

UCLASS()
class AFestivalDancePawn_n_ra203 : public ATresCharPawnBase, public ITresRaDanceSplineInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Idle_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Move_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Spin_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Step_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotateSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresRaDanceAreaType DefaultSplineMoveMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SafeDistanceFromWall;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName TakeDistanceMotion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FieldVoiceName;
    
private:
    UPROPERTY()
    ATresRaFestivalDanceManager* m_pDanceMng;
    
    UPROPERTY()
    ATresPlayerControllerBase* m_pPC;
    
public:
    AFestivalDancePawn_n_ra203();
    
    // Fix for true pure virtual functions not being implemented
};

