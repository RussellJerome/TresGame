#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex362_ArielCombo.generated.h"

class UTresStateBase;
class USoundBase;
class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack5_e_ex362_ArielCombo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTresStateBase> m_BuddyState;
    
    UPROPERTY(EditAnywhere)
    bool m_IsDoCancel;
    
    UPROPERTY(EditAnywhere)
    float m_RotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_CanUseHitPoint;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_VoiceSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PlayVoiceRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_InvisibleTerra;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_MoveBack;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_MoveBackEQSQuery;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackSpeedMax;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackDist;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackInitRate;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackAddSpdRate;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackSlowSpdRate;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackRotRate;
    
    UPROPERTY(EditAnywhere)
    float m_MoveBackUpdateRotTime;
    
public:
    UTresAttack5_e_ex362_ArielCombo();
};

