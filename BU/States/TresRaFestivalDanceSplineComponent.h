#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresRaDanceSplineGroup.h"
#include "TresRaDanceSplineOwner.h"
#include "TresRaFestivalDanceSplineComponent.generated.h"

class ATresRaFestivalDanceManager;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TRESGAME_API UTresRaFestivalDanceSplineComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTresRaDanceSplineGroup> m_Groups;
    
    UPROPERTY(EditAnywhere)
    float m_fOnRange;
    
    UPROPERTY(EditAnywhere)
    float m_fOnLineJudgeRange;
    
    UPROPERTY(EditAnywhere)
    float m_fOnLineJudgeYaw;
    
    UPROPERTY(EditAnywhere)
    float m_fLimitAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fTurnSpeedRate;
    
    UPROPERTY(EditAnywhere)
    float m_fMoveSpeedNormal;
    
    UPROPERTY(EditAnywhere)
    float m_fTurnSpeedNormal;
    
    UPROPERTY(EditAnywhere)
    float m_fMoveSpeedReturn;
    
    UPROPERTY(EditAnywhere)
    float m_fTurnSpeedReturn;
    
    UPROPERTY(EditAnywhere)
    float m_fMoveSpeedCenter;
    
    UPROPERTY(EditAnywhere)
    float m_fTurnSpeedCenter;
    
    UPROPERTY(EditAnywhere)
    int32 m_TotalNormalCount;
    
    UPROPERTY(EditAnywhere)
    float m_CenterKeepRate;
    
    UPROPERTY(EditAnywhere)
    float m_fCenterFollowRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bCenterFollowRestrict;
    
protected:
    UPROPERTY()
    TWeakObjectPtr<ATresRaFestivalDanceManager> m_pDanceMng;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<FTresRaDanceSplineOwner> m_OwnerLists;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<int32> m_CenterOwnerIndexList;
    
    UPROPERTY(VisibleInstanceOnly)
    TArray<int32> m_CenterOutOwnerIndexList;
    
public:
    UTresRaFestivalDanceSplineComponent();
};

