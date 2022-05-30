#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack2_e_ex301_TeleportSlams.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex301_TeleportSlams : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_High;
    
    UPROPERTY(EditAnywhere)
    float m_WarpTime;
    
    UPROPERTY(EditAnywhere)
    float m_WarpRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bAdsorptionParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditAnywhere)
    FVector m_SwordWaveOffset;
    
    UPROPERTY(EditAnywhere)
    int32 m_SlashEffectGroupID;
    
public:
    UTresAttack2_e_ex301_TeleportSlams();
};

