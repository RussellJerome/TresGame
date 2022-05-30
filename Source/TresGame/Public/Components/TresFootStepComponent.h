#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresFootStepComponent.generated.h"

class UTresFootStepSet;
class USceneComponent;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresFootStepComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UTresFootStepSet* m_FootStepSet;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bAlwaysPut: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bWetPut: 1;
    
    UPROPERTY(Transient)
    float m_WetCount;
    
    UPROPERTY(Transient)
    uint8 m_bIsWet: 1;
    
public:
    UPROPERTY(Export)
    USceneComponent* m_OwnerMeth;
    
    UTresFootStepComponent();
};

