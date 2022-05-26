#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresLoadAsset.h"
#include "UObject/NoExportTypes.h"
#include "ETresItemDefWeapon.h"
#include "TresGameModeLoadAsset.generated.h"

class UTresEnemyCommonParam;
class ATresPrizeBox;
class UTresFriendData;
class ATresAICoordinator;
class ATresPrize;
class UTresDamageCommonParam;
class UDataTable;
class UParticleSystem;
class ATresItemMognetMedal;
class UTresPhysMatEffectAsset;
class USQEX_ParticleAttachDataAsset;
class UBlueprint;
class ATresKHShaderController;
class ATresAdhereObjBase;
class UTresDamageType;

UCLASS()
class UTresGameModeLoadAsset : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrize> m_HpPrizeS;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrize> m_HpPrizeL;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrize> m_MpPrizeS;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrize> m_MpPrizeL;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrize> m_MunnyPrizeS;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrize> m_MunnyPrizeM;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrize> m_MunnyPrizeL;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrize> m_FocusPrizeS;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrize> m_FocusPrizeL;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrize> m_CrabPrize;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrize> m_MovableCrabPrize;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrize> m_LightPrizeS;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrize> m_LightPrizeL;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrizeBox> m_HealPrizeBox;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrizeBox> m_MatePrizeBox;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrizeBox> m_FstfPrizeBox;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPrizeBox> m_RarePrizeBox;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresEnemyCommonParam> EnemyCommonParam;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_EnemyBaseStatusListData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_EnemyShipBaseStatusListData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresDamageCommonParam> m_FriendDamageCommonParam;
    
    UPROPERTY(EditDefaultsOnly)
    UTresFriendData* m_FriendData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresDamageCommonParam> m_PlayerDamageCommonParam;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresItemMognetMedal> m_MognetMedalClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CmnCriticalHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CmnGuardReflectEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CmnStaggerReflectEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CmnInvincibleHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CmnArmorHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CmnIgnoreGuardHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_CmnPlayerDeadEffectEad;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CmnGameOverHeartEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_CmnGameOverHeartLocation;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CmnGameOverLightEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_CmnGameOverLightLocation;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CmnMissionFailedLightEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_CmnMissionFailedLightLocation;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USQEX_ParticleAttachDataAsset*> m_CmnParticleAttachDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UBlueprint* m_GameOverKHSBP;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresKHShaderController> m_GameOverKHS;
    
    UPROPERTY(EditDefaultsOnly)
    UTresPhysMatEffectAsset* m_CmnPhysMatEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CmnSnowTailAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAICoordinator> m_AICoordinatorClass_Beginner;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAICoordinator> m_AICoordinatorClass_Standard;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAICoordinator> m_AICoordinatorClass_Proud;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAICoordinator> m_AICoordinatorClass_Critical;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAdhereObjBase> m_BadStatCloudClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAdhereObjBase> m_BadStatDischargeClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAdhereObjBase> m_BadStatSneezeClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAdhereObjBase> m_BadStatHoneyClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresDamageType> m_PhysDamageTypeClass[4];
    
    UPROPERTY(EditDefaultsOnly)
    FName m_remyMapName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_remyPlayerStartTag;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_remyRecipeData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_remyTwilightTownMapName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_remyTwilightTownPlayerStartTag;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_remyWorldMapName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_remyWorldMapAreaMapName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_remyWorldMapPlayerStartTag;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_remyTwilightTownFinalMilestoneRewardPlayerStartTag;
    
    UPROPERTY(EditDefaultsOnly)
    ETresItemDefWeapon m_finalMilestoneReward;
    
    UTresGameModeLoadAsset();
};

