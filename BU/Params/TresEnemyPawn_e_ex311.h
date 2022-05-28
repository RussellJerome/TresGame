#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresEnemyPawn_e_ex311.generated.h"

class ATresEnemyPawn_e_ex311KBBoard;
class ATresPawnBase;
class USoundBase;
class ATresProjectileBase;
class UTresAction5_e_ex311_AfterImage;
class UParticleSystemComponent;
class ATresEnemyPawn_e_ex311;
class ATresCharPawnBase;

UCLASS()
class ATresEnemyPawn_e_ex311 : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPawnBase> m_KBBoard;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_KBBoardTailAttackPawnData;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_PopKeybladeBoardLocation;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnTailAttackIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RollSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RollMax;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyXIIIPawnBase> m_Avatar;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresAction5_e_ex311_AfterImage> m_AfterImageAction;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_PhaseEXOneEndHitPoint;
    
private:
    UPROPERTY()
    ATresEnemyPawn_e_ex311KBBoard* m_KeybladeBoard;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_KBBoardParticle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_KBBoardPopParticle;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex311* m_AvatarPawn;
    
    UPROPERTY()
    ATresCharPawnBase* m_AttackedChar;
    
public:
    ATresEnemyPawn_e_ex311();
    UFUNCTION(BlueprintCallable)
    bool IsFinishAttack();
    
};

