#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "Tres_e_bx903Rush_Trigger.h"
#include "TresAttack2_e_bx903_Rush.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_bx903_Rush : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_TentacleProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTres_e_bx903Rush_Trigger> m_RushTriggerArray;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RushPrevTriggerTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_RushPrevColor;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RushTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RushDigYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RushDigPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RushPrevMotionTime;
    
    UPROPERTY(EditAnywhere)
    float m_TurnSpeed;
    
public:
    UTresAttack2_e_bx903_Rush();
};

