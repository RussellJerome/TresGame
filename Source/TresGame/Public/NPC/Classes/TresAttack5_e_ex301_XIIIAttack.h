#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5XIIIAttackTypes_e_ex301.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack5_e_ex301_XIIIAttack.generated.h"

class UTresStateBase;
class UParticleSystem;
class USoundBase;
class ATresCameraNormal;

UCLASS(HideDropdown)
class UTresAttack5_e_ex301_XIIIAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_XSlashDownState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_XCrossSlashState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_XSlashState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_XSlashUpState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_XLaser2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_XLaser;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_XLaser3;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_TackleSlash;
    
    UPROPERTY(EditAnywhere)
    FVector m_StartPosOffset;
    
    UPROPERTY(EditAnywhere)
    float m_AvatarPopIntervalTime;
    
    UPROPERTY(EditAnywhere)
    float m_SpawnAvatarHigh;
    
    UPROPERTY(EditAnywhere)
    float m_Attack1StartTime;
    
    UPROPERTY(EditAnywhere)
    int32 m_FirstTackleEndID;
    
    UPROPERTY(EditAnywhere)
    float m_FirstLaserStartWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_FirstLaserEndTime;
    
    UPROPERTY(EditAnywhere)
    float m_SlashDownStartTime;
    
    UPROPERTY(EditAnywhere)
    float m_SlashDownStartDist;
    
    UPROPERTY(EditAnywhere)
    float m_SlashDownStartHigh;
    
    UPROPERTY(EditAnywhere)
    float m_XCrossSlahStartTime;
    
    UPROPERTY(EditAnywhere)
    float m_XCrossSlahStartDist;
    
    UPROPERTY(EditAnywhere)
    float m_XCrossSlahIntervalTime;
    
    UPROPERTY(EditAnywhere)
    float m_XCrossSlahLaserEndWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_XSlahFirstWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_XSlahLaserEndWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_XSlahSecondWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_XSlahStartTime;
    
    UPROPERTY(EditAnywhere)
    float m_XSlahStartDist;
    
    UPROPERTY(EditAnywhere)
    float m_TestRot1;
    
    UPROPERTY(EditAnywhere)
    float m_TestRot2;
    
    UPROPERTY(EditAnywhere)
    float m_XSlahSecondLaserEndWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_XRiseDist;
    
    UPROPERTY(EditAnywhere)
    float m_XRiseStartTime;
    
    UPROPERTY(EditAnywhere)
    float m_XRiseIntervalTime;
    
    UPROPERTY(EditAnywhere)
    float m_XTackleDist;
    
    UPROPERTY(EditAnywhere)
    float m_TackleSlashStartWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_TackleSlashIntervalTime;
    
    UPROPERTY(EditAnywhere)
    float m_TackleSlashIntervalAddTime;
    
    UPROPERTY(EditAnywhere)
    float m_TackleSlashIntervalTimeMin;
    
    UPROPERTY(EditAnywhere)
    int32 m_LaserId;
    
    UPROPERTY(EditAnywhere)
    float m_LaserEndIntervalTime;
    
    UPROPERTY(EditAnywhere)
    float m_LaserFinishEndWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_LaserEndHigh;
    
    UPROPERTY(EditAnywhere)
    float m_LaserEndWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_TestRot3;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ChangeWorldFlashData;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<TresAttack5XIIIAttackTypes_e_ex301> m_XIIIAttackTypeParam;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> m_AvatarInitPosList;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> m_AvatarLaserPosList;
    
    UPROPERTY(EditAnywhere)
    float m_AnotherWorldEffectWaitParamTime;
    
    UPROPERTY(EditAnywhere)
    float m_AnotherWorldEffectParamTime;
    
    UPROPERTY(EditAnywhere)
    float m_LaserDist;
    
    UPROPERTY(EditAnywhere)
    float m_LaserHigh;
    
    UPROPERTY(EditAnywhere)
    float m_SecondLaserEndTime;
    
    UPROPERTY(EditAnywhere)
    FVector m_CameraLockAtPos;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(EditAnywhere)
    float m_ActionEndWaitTime;
    
    UPROPERTY(EditAnywhere)
    float m_CameraChangeWait;
    
    UPROPERTY(EditAnywhere)
    float m_CameraDist;
    
    UPROPERTY(EditAnywhere)
    float m_CameraTransition;
    
private:
    UPROPERTY(Transient)
    ATresCameraNormal* m_Camera;
    
public:
    UTresAttack5_e_ex301_XIIIAttack();
};

