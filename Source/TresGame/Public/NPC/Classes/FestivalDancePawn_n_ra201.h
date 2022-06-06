#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresRaDanceSplineInterface.h"
#include "EDancePerformType.h"
#include "TresRapunzelDanceMission.h"
#include "ETresRaDanceAreaType.h"
#include "FestivalDancePawn_n_ra201.generated.h"

class USoundBase;
class UTresSkeletalMeshComponent;
class UTresReactorComponent;
class UParticleSystem;
class ATresRaFestivalDanceManager;

UCLASS()
class AFestivalDancePawn_n_ra201 : public ATresCharPawnBase, public ITresRaDanceSplineInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* m_HairMesh1;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresReactorComponent* m_Reactor;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Idle_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Spin_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Step_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Finish_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FinishFirstHalf_MotionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<EDancePerformType> ActionList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTresRapunzelDanceMission> MissionList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 PerformChangeCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotateSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RhythmEffectGroupID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SpinEffectGroupID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 StepEffectGroupID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TakeDistanceLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TakeDistanceTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresRaDanceAreaType DefaultSplineMoveMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FieldVoiceName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* TestSoundData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* TestEffect_MarkerSpin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* TestEffect_MarkerStep;
    
private:
    UPROPERTY()
    ATresRaFestivalDanceManager* m_pDanceMng;
    
public:
    AFestivalDancePawn_n_ra201();
protected:
    UFUNCTION()
    void OnDanceRhythmBeat();
    
    
    // Fix for true pure virtual functions not being implemented
};

