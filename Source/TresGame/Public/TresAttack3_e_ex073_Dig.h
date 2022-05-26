#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresAttackDefinitionRanged.h"
#include "ETresBodyPushPowerLevel.h"
#include "PRIZE_KIND.h"
#include "TresAttack3_e_ex073_Dig.generated.h"

class ATresProjectileBase;
class ATresProjectile_e_ex073_Rock;

UCLASS(HideDropdown)
class UTresAttack3_e_ex073_Dig : public UTresAttackDefinitionRanged {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_RockProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_digProjectileVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    ETresBodyPushPowerLevel m_changePushPowerLevel;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_PrizePerTotal;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_RockPerTotal;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MunnySplashPerTotal;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NonePerTotal;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DigPrizeNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DigPrizeEnableNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DigPrizePitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DigPrizeYaw;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DigMunnySplashNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DigMunnySNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DigMunnyLNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DigMunnySpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_SplashProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TEnumAsByte<PRIZE_KIND>> m_DigDropTable;
    
    UPROPERTY()
    ATresProjectile_e_ex073_Rock* m_RockProjectile;
    
public:
    UTresAttack3_e_ex073_Dig();
};

