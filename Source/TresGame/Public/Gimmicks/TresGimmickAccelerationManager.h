#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickAccelerationManager.generated.h"

class ATresGimmickAcceleration;

UCLASS()
class ATresGimmickAccelerationManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_TickDistance;
    
    UPROPERTY(EditAnywhere)
    float m_VisibilityDistance;
    
    UPROPERTY(EditAnywhere)
    float m_CollisionDistance;
    
    UPROPERTY(EditAnywhere)
    int32 m_EnableCheckNum;
    
private:
    UPROPERTY(Transient)
    TArray<ATresGimmickAcceleration*> m_pGimmicks;
    
    UPROPERTY(Transient)
    int32 m_GimmickIndex;
    
    UPROPERTY(Transient)
    float m_TickDistanceSq;
    
    UPROPERTY(Transient)
    float m_VisibilityDistanceSq;
    
    UPROPERTY(Transient)
    float m_CollisionDistanceSq;
    
public:
    ATresGimmickAccelerationManager();
};

