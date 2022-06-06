#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WaveSet_e_ex310.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "WarpSet_e_ex306.h"
#include "TresAttack8_e_ex306_Swing.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack8_e_ex306_Swing : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FWaveSet_e_ex310 m_WaveSet;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_ProjectileOffset_L;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_ProjectileOffset_R;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_ProjectileRot_L;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_ProjectileRot_R;
    
    UPROPERTY(EditDefaultsOnly)
    FWarpSet_e_ex306 m_SecondWarp;
    
    UPROPERTY()
    bool m_bWarpOnSecondAttack;
    
    UPROPERTY(EditDefaultsOnly)
    FWarpSet_e_ex306 m_ThirdWarp;
    
    UPROPERTY()
    bool m_bWarpOnThirdAttack;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile_Down;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileOffset_Radius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileOffset_H;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_ProjectileRot_Down;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFallVelocity;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    int32 m_BoolArray[10];
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FRotator m_AddRot;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_WarpAppearGroupID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_WarpDisappearGroupID;
    
protected:
    UPROPERTY()
    ATresProjectileBase* m_ProjectileArray[4];
    
public:
    UTresAttack8_e_ex306_Swing();
};

