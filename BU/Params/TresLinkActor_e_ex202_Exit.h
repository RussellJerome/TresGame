#pragma once
#include "CoreMinimal.h"
#include "TresLinkActor_e_ex202_Base.h"
#include "ETresLinkActorEx202Size.h"
#include "TresLinkActor_e_ex202_Exit.generated.h"

class ATresLinkActor_e_ex202_Entry;

UCLASS()
class ATresLinkActor_e_ex202_Exit : public ATresLinkActor_e_ex202_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TArray<TWeakObjectPtr<ATresLinkActor_e_ex202_Entry>> m_EntryActors;
    
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<ETresLinkActorEx202Size> m_Size;
    
    UPROPERTY(EditInstanceOnly)
    uint8 m_bEnableCorrection: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetDistances[3];
    
    UPROPERTY(EditDefaultsOnly)
    float m_AddMotionAlpha[3];
    
public:
    ATresLinkActor_e_ex202_Exit();
    UFUNCTION(BlueprintPure)
    TArray<ATresLinkActor_e_ex202_Entry*> GetEntryActors() const;
    
    UFUNCTION(BlueprintPure)
    bool CanUse() const;
    
};

