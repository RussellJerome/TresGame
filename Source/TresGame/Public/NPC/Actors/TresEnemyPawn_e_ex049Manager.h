#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemyPawn_e_ex049Manager.generated.h"

class ATresEnemyPawn_e_ex049;

UCLASS()
class ATresEnemyPawn_e_ex049Manager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_PuddingEnableDistance;
    
    UPROPERTY(EditAnywhere)
    float m_PuddingVisibilityDistance;
    
    UPROPERTY(EditAnywhere)
    int32 m_PuddingEnableCheckNum;
    
private:
    UPROPERTY(Transient)
    TArray<ATresEnemyPawn_e_ex049*> m_pPuddings;
    
    UPROPERTY(Transient)
    int32 m_PuddingIndex;
    
    UPROPERTY(Transient)
    float m_PuddingEnableDistanceSq;
    
    UPROPERTY(Transient)
    float m_PuddingVisibilityDistanceSq;
    
public:
    ATresEnemyPawn_e_ex049Manager();
};

