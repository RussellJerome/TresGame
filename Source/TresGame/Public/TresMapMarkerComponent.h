#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETresUIMapMarkerType.h"
#include "TresMapMarkerComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresMapMarkerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresUIMapMarkerType m_MapMarkerType;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FName> m_MaskMapNames;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_EnableUpdatePosition;
    
public:
    UTresMapMarkerComponent();
};

