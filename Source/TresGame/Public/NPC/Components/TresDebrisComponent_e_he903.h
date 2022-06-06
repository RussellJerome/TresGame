#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/SceneComponent.h"
#include "TresTornadoDebrisUnit.h"
#include "TresTornadoDebrisDestinationEffectInfo.h"
#include "TresDebrisComponent_e_he903.generated.h"

class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDebrisComponent_e_he903 : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseEmptyStateAsIdle;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresTornadoDebrisUnit> m_DebrisUnits;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAdditionalRevolveAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FTresTornadoDebrisDestinationEffectInfo m_DestinationEffectInfo;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<AActor>> m_ActorRefArray;
    
public:
    UTresDebrisComponent_e_he903();
};

