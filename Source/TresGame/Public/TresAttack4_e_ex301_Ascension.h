#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4AscensionTypes_e_ex301.h"
#include "TresAttack4_e_ex301_Ascension.generated.h"

class ATresEnemy_e_ex301_AscensionPillarProjectileBase;
class ATresProjectileBase;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex301_Ascension : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<TresAttack4AscensionTypes_e_ex301> m_AscensionTypeParam;
    
    UPROPERTY(EditAnywhere)
    bool m_AscensionModeOff;
    
    UPROPERTY(EditAnywhere)
    float m_ActionTime;
    
    UPROPERTY(EditAnywhere)
    float m_LightSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_WarpTimer;
    
    UPROPERTY(EditAnywhere)
    float m_LightWaitTimer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<ATresProjectileBase>> m_PillarProjectileList;
    
    UPROPERTY(EditAnywhere)
    float m_PillarPopTime;
    
    UPROPERTY(EditAnywhere)
    float m_PillarPopEndTime;
    
    UPROPERTY(EditAnywhere)
    float m_PillarMoveTime;
    
    UPROPERTY(EditAnywhere)
    float m_PillarEndWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_PillarOffset;
    
    UPROPERTY(EditAnywhere)
    float m_PillarRotOffset;
    
    UPROPERTY(EditAnywhere)
    float m_PillarDist;
    
    UPROPERTY(EditAnywhere)
    float m_SoraInitSetPos;
    
    UPROPERTY(EditAnywhere)
    float m_FriendInitSetPos;
    
    UPROPERTY(EditAnywhere)
    float m_SoraInitSetRot;
    
    UPROPERTY(EditAnywhere)
    float m_FriendInitSetRot;
    
    UPROPERTY(EditAnywhere)
    float m_PillarAtk3P1DistanceSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_PillarAtk3P3WaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_WeponDenableWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_PillarAtkMotBlendFrame;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(EditAnywhere)
    float m_PillarAtkAfterHigh;
    
private:
    UPROPERTY()
    TArray<ATresEnemy_e_ex301_AscensionPillarProjectileBase*> m_PillarList;
    
public:
    UTresAttack4_e_ex301_Ascension();
};

