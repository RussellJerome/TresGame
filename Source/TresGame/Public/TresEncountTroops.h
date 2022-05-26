#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEncountTroops.generated.h"

class USceneComponent;

UCLASS(Abstract)
class ATresEncountTroops : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* DummyRoot;
    
public:
    UPROPERTY(EditDefaultsOnly)
    float m_BattleAreaWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BattleAreaWidthExtra;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BattleAreaOffsetLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BattleAreaAbortRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SubEQSAreaWidth;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EnemyRadius;
    
    ATresEncountTroops();
};

