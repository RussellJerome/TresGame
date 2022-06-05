#pragma once
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAction_EnemyShipBase_Artillery.generated.h"



UCLASS(HideDropdown)
class UTresAction_EnemyShipBase_Artillery : public UTresAttackDefinitionWeaponBase
{
    GENERATED_BODY()
public:
    
    UPROPERTY(EditDefaultsOnly)
    float m_RangedRandAngle;                                                          // 0x0178 (size: 0x4)

    UPROPERTY(EditDefaultsOnly)
    float m_RangedRandOverDistance;                                                   // 0x017C (size: 0x4)

    UPROPERTY(EditDefaultsOnly)
    float m_RangedRandPrevDistance;                                                   // 0x0180 (size: 0x4)

    UPROPERTY(EditDefaultsOnly)
    FVector m_TargetOffset;                                                           // 0x0184 (size: 0xC)

    UPROPERTY(EditDefaultsOnly)
    bool m_bTargetRotByVelocity;                                                      // 0x0190 (size: 0x1)

    UPROPERTY(EditDefaultsOnly)
    float m_DelayFireTime;                                                            // 0x0194 (size: 0x4)

    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_ProjectileIntervalRange;                                         // 0x0198 (size: 0x8)

    UPROPERTY(EditDefaultsOnly)
    bool m_bRefreshAfterDelay;                                                        // 0x01A0 (size: 0x1)

    UPROPERTY(EditDefaultsOnly)
    bool m_bPitchToTargetDirectly;                                                    // 0x01A1 (size: 0x1)

    UPROPERTY(EditDefaultsOnly)
    float m_RangedPitchAngle;                                                         // 0x01A4 (size: 0x4)

    UPROPERTY(EditDefaultsOnly)
    float m_AimCompPercentage;                                                        // 0x01A8 (size: 0x4)

    UPROPERTY(EditDefaultsOnly)
    float m_AimCompVelLimit;                                                          // 0x01AC (size: 0x4)

    UPROPERTY(EditDefaultsOnly)
    bool m_bUseMovedVelocity;                                                         // 0x01B0 (size: 0x1)

    UPROPERTY(EditDefaultsOnly)
    float m_ArtilleryLimitAngle;                                                      // 0x01B4 (size: 0x4)

    UPROPERTY(EditDefaultsOnly)
    float m_AILimitAngle;                                                             // 0x01B8 (size: 0x4)

    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxProjectileNum;                                                         // 0x01BC (size: 0x4)

    UPROPERTY(EditDefaultsOnly)
    int32 m_ArtilleryOneShotNum;                                                      // 0x01C0 (size: 0x4)

    UPROPERTY(EditDefaultsOnly)
    float m_LimitLowerSpeed;                                                          // 0x01C4 (size: 0x4)

    UPROPERTY(EditDefaultsOnly)
    uint8 m_bOverrWriteMaxSpeed;                                                      // 0x01C8 (size: 0x1)

    UPROPERTY(EditDefaultsOnly)
    float m_OverrWriteMaxSpeed;                                                       // 0x01CC (size: 0x4)

    UPROPERTY(EditDefaultsOnly)
    FName m_TargetSocket;                                                             // 0x01D0 (size: 0x8)

    UPROPERTY(EditDefaultsOnly)
    bool m_bDisableTeamCheck;                                                         // 0x01D8 (size: 0x1)

    UPROPERTY(EditDefaultsOnly)
    bool m_bUseTargetBB;                                                              // 0x01D9 (size: 0x1)

    UPROPERTY(EditDefaultsOnly)
    int32 m_SelectOptimizeCannonRate;                                                 // 0x01DC (size: 0x4)

    UPROPERTY(EditDefaultsOnly)
    FName m_AttackName2;                                                              // 0x01E0 (size: 0x8)
    
}; // Size: 0x258