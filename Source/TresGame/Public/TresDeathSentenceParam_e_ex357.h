#pragma once
#include "CoreMinimal.h"
#include "TresDeathSentenceParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FTresDeathSentenceParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float StartCount;
    
    UPROPERTY(EditDefaultsOnly)
    float CountSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableDispelArmorHP: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableDispelDamage: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DispelDamageNum;
    
    UPROPERTY(EditDefaultsOnly)
    float DispelTotalAttackSrcPower;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageCountDisableTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DispelBitDieNum;
    
    UPROPERTY(EditDefaultsOnly)
    float BloomShieldTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bIsEndNotDieMode: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableRevengeChain: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableInformation: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bEnableSpecialGameoverHint: 1;
    
    TRESGAME_API FTresDeathSentenceParam_e_ex357();
};

