#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickCA_TickControlManager.generated.h"

UCLASS()
class ATresGimmickCA_TickControlManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 m_UpdateNumPerFrame;
    
    UPROPERTY(EditAnywhere)
    int32 m_ActiveNumPerFrame;
    
    UPROPERTY(EditAnywhere)
    int32 m_ReserveSize;
    
public:
    ATresGimmickCA_TickControlManager();
};

