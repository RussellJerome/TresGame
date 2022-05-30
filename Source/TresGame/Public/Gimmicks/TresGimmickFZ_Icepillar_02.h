#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickFZ_Icepillar_Manager_IActor.h"
#include "TresGimmickFZ_Icepillar_02_OnNotifyGimmickEscapeSignatureDelegate.h"
#include "TresGimmickFZ_Icepillar_02.generated.h"

class AActor;

UCLASS(Abstract, Config=Game)
class ATresGimmickFZ_Icepillar_02 : public ATresGimmickSkeletalBase, public ITresGimmickFZ_Icepillar_Manager_IActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool m_IsCinematicMode;
    
    UPROPERTY(BlueprintReadWrite)
    float m_AttackRadius;
    
    UPROPERTY(BlueprintReadWrite)
    float m_PersonalSpaceRadius;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_IsSearching;
    
    UPROPERTY(BlueprintReadWrite)
    FVector m_SearchLocation;
    
    UPROPERTY(BlueprintAssignable)
    FTresGimmickFZ_Icepillar_02_OnNotifyGimmickEscapeSignature OnNotifyGimmickEscape;
    
    ATresGimmickFZ_Icepillar_02();
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnNotifyGimmickEscape();
    
    UFUNCTION(BlueprintCallable)
    void BP_UnRegistAttacker(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void BP_RegistAttacker(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    bool BP_IsRegistedAttacker() const;
    
    UFUNCTION(BlueprintPure)
    bool BP_CheckRegistingAttacker(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_CheckAttackLocationRail(AActor* Attacker, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    bool BP_CheckAttackLocation(AActor* Attacker, FVector Location);
    
    
    // Fix for true pure virtual functions not being implemented
};

