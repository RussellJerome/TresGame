#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresSpawnPointFilter.h"
#include "UObject/NoExportTypes.h"
#include "TresSpawnPointRayCastFilter.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(NonTransient)
class TRESGAME_API UTresSpawnPointRayCastFilter : public UTresSpawnPointFilter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector m_Position;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> m_IgnoredActors;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> m_IgnoredComponents;
    
    UPROPERTY()
    TEnumAsByte<ECollisionChannel> m_CollisionChannel;
    
    UTresSpawnPointRayCastFilter();
};

