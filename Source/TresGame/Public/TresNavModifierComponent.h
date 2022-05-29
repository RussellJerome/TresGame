#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavModifierComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavModifierComponent -FallbackName=NavModifierComponent
#include "TresNavModifierComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bManualCalcBounds;
    
    UPROPERTY(EditAnywhere)
    bool m_bAccurateNavigationData;
    
    UTresNavModifierComponent();
    UFUNCTION(BlueprintCallable)
    void SetUpdateNavigation(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RefreshNavModifier();
    
};

