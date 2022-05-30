#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TresLevelEntityComponent.generated.h"

class ATresLevelEntity;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TRESGAME_API UTresLevelEntityComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_Version;
    
    UPROPERTY(DuplicateTransient, EditDefaultsOnly)
    ATresLevelEntity* m_LevelEntityTemplate;
    
    UPROPERTY(Transient)
    ATresLevelEntity* m_LevelEntity;
    
    UTresLevelEntityComponent();
};

