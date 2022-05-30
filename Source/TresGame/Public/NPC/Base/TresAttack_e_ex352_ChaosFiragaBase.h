#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIILE_Base.h"
#include "UObject/NoExportTypes.h"
#include "TresChaosFiragaParams_e_ex352.h"
#include "UObject/NoExportTypes.h"
#include "TresVoice_e_ex352.h"
#include "TresAttack_e_ex352_ChaosFiragaBase.generated.h"

UCLASS(Abstract)
class UTresAttack_e_ex352_ChaosFiragaBase : public UTresAttack_XIIILE_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_MaxRotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FTresChaosFiragaParams_e_ex352 m_ChaosFiragaParams[2];
    
    UPROPERTY(EditDefaultsOnly)
    float m_PlanetBlasterChargeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PlanetBlasterDarkMatterSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_RelativeLocationWhenTargetCaught;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_RelativeLocationFromTarget;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresVoice_e_ex352> m_VoiceArray;
    
public:
    UTresAttack_e_ex352_ChaosFiragaBase();
};

