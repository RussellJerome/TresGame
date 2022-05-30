#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInstVisibility.h"
#include "TresInterpTrackInstVisibility.generated.h"

class USceneComponent;

UCLASS()
class TRESGAME_API UTresInterpTrackInstVisibility : public UInterpTrackInstVisibility {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool m_FirstTime;
    
    UPROPERTY()
    bool m_BackupActorHidden;
    
    UPROPERTY(Export)
    TArray<USceneComponent*> m_Components;
    
    UPROPERTY()
    TArray<bool> m_BackupComponentVisible;
    
    UTresInterpTrackInstVisibility();
};

