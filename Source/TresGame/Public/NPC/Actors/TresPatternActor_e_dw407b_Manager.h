#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresPatternActor_e_dw407b_Manager.generated.h"

class ATresPatternActor_e_dw407b_PillarLight;
class USceneComponent;

UCLASS(Abstract)
class ATresPatternActor_e_dw407b_Manager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    TArray<ATresPatternActor_e_dw407b_PillarLight*> m_PatternList;
    
    UPROPERTY(Export)
    USceneComponent* SceneComponent;
    
public:
    ATresPatternActor_e_dw407b_Manager();
};

