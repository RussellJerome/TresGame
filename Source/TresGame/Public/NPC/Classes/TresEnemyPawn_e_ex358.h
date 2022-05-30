#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILBCoopPawnBase.h"
#include "TresEnemyNotifyInterface_e_ex358.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyEnvQueryBindParamFloat_ex358.h"
#include "TresEnemyPawn_e_ex358.generated.h"

class UEnvQuery;
class UTresProjectileManagerComponent_e_ex358_Jinrai;
class ATresEnemyPawn_e_ex358;
class UParticleSystem;
class UTresActionDefinitionBase;

UCLASS()
class ATresEnemyPawn_e_ex358 : public ATresEnemyXIIILBCoopPawnBase, public ITresEnemyNotifyInterface_e_ex358 {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresProjectileManagerComponent_e_ex358_Jinrai* MyProjectileManager;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex358> m_AvatarClass;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsAvatar: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableSyncAttractionHitPoint: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_WildDanceDisappearDamageNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WildDanceDisappearDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WildDanceWarpOutDisableLockonDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WildDanceDamageDisableLockonStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableWildDaanceChangeManualLockonOtherAvatar: 1;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ThunderStepParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ThunderStepEndParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ThunderStepAuraParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThunderStepEffectColorChangeInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_ThunderStepEffectColorChangeStartColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_ThunderStepEffectColorChangeEndColor;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UTresActionDefinitionBase>> m_AvatarWildDanceActionClassList;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_AvatarWildDanceLandEnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_AvatarWildDanceAirEnvQuery;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresEnemyEnvQueryBindParamFloat_ex358> m_FindAttackLocationBindParamFloatList;
    
public:
    ATresEnemyPawn_e_ex358();
    UFUNCTION()
    void SetDebugAvatarWildDanceIndex(int32 Index);
    
    UFUNCTION(Exec)
    bool IsJinraiBeforeAttackHit() const;
    
    UFUNCTION(BlueprintCallable)
    void EndWildDanceDarkMode();
    
    
    // Fix for true pure virtual functions not being implemented
};

