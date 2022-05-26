#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGumiShipWeaponBase.h"
#include "ETresGumiShipMuzzleInfoCalcType.h"
#include "TresGumiShipMuzzleParam.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipShootWeaponBase.generated.h"

class ATresGumiShipProjectileBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipShootWeaponBase : public UTresGumiShipWeaponBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipPostShootBullet);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ETresGumiShipMuzzleInfoCalcType m_eMuzzleInfoCalcType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FRotator m_BaseMuzzleRotation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FTresGumiShipMuzzleParam> m_MuzzleParam;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fCoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fDelayTimeOfStartShoot;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fDispersion;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bySimultaneousShotsCount;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<ATresGumiShipProjectileBase> m_ProjectileType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bUseTargetDirection;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bPredictionTargetWhenUseTargetDirection;
    
public:
    UTresGumiShipShootWeaponBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShootBullet(ATresGumiShipProjectileBase* pBullet);
    
private:
    UFUNCTION()
    void _AddRecycleProjectile(ATresGumiShipProjectileBase* pProjectile, bool& rbWasRecycle);
    
};

