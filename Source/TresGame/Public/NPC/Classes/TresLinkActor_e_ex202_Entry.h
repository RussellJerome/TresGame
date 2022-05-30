#pragma once
#include "CoreMinimal.h"
#include "TresLinkActor_e_ex202_Base.h"
#include "TresLinkActor_e_ex202_Entry.generated.h"

class ATresLinkActor_e_ex202_Exit;
class USplineComponent;

UCLASS()
class ATresLinkActor_e_ex202_Entry : public ATresLinkActor_e_ex202_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    TWeakObjectPtr<ATresLinkActor_e_ex202_Exit> m_ExitActor;
    
    UPROPERTY(Export, VisibleAnywhere)
    USplineComponent* SplineComponent;
    
    UPROPERTY(EditInstanceOnly)
    float m_Radius;
    
    UPROPERTY(EditInstanceOnly)
    float m_Angle;
    
public:
    ATresLinkActor_e_ex202_Entry();
    UFUNCTION(BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintPure)
    float GetAngle() const;
    
    UFUNCTION(BlueprintPure)
    bool CanUse() const;
    
};

