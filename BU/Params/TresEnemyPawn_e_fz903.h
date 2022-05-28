#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_fz903.generated.h"

class UTresActionDefinitionBase;

UCLASS()
class ATresEnemyPawn_e_fz903 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresActionDefinitionBase> m_ReleaseArmorActionData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresActionDefinitionBase> m_ShakeOffActionData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresActionDefinitionBase> m_SnowCoverSwingActionData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTresActionDefinitionBase> m_AgonizeActionData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArmorStateTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RecastReactionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BlowDamageTurnRate;
    
public:
    ATresEnemyPawn_e_fz903();
    UFUNCTION()
    bool IsArmour() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_StopUserAI(bool Switch);
    
    UFUNCTION(BlueprintCallable)
    void BP_StartSnowCoverSwing();
    
    UFUNCTION(BlueprintCallable)
    void BP_StartShakeOffDonald();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetArmorMorphWeight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void BP_RunEndSnowCoverSwing();
    
    UFUNCTION(BlueprintCallable)
    void BP_ReleaseArmorParam();
    
    UFUNCTION(BlueprintCallable)
    void BP_ProgressSnowCoverSwingStep();
    
    UFUNCTION(BlueprintCallable)
    void BP_InstallingArmorParam();
    
    UFUNCTION(BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetAnimOffsetAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ForcedTerminationSnowCoverSwing();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBT();
    
    UFUNCTION(BlueprintCallable)
    void BP_AttackEndSnowCoverSwing();
    
};

