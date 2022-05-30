#pragma once
#include "CoreMinimal.h"
#include "ETresBodyCollReactionType.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresMagnaStormTractionInfo_e_ex355.h"
#include "TresAttack13_e_ex355_MagnaStorm.generated.h"

class UEnvQuery;
class UParticleSystemComponent;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack13_e_ex355_MagnaStorm : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    int32 m_iMaxAttackCount;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fNextAttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackStartDistance;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxComboOnAttack;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_ComboAttackIDArray;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fApproachMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fApproachAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnVelocity;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    UEnvQuery* m_EQS_Roam;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    UEnvQuery* m_EQS_Attack;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fEQSWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresMagnaStormTractionInfo_e_ex355> m_TractionInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEndWarp;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_EndWarp;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bDebugFinish;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FVector m_vDebugWarpOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    ETresBodyCollReactionType m_DebugCodyCollReactionType;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ApproachEffectClass;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ApproachEffectComp;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ApprochEffectAttachSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bRevengeAbortHpPercent;
    
    UTresAttack13_e_ex355_MagnaStorm();
};

