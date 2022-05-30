#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "ETresGumiShipConsumptionType.h"
#include "ETresGumiShipWeaponSequencePort.h"
#include "TresGumiShipSpWeaponConnection.generated.h"

class UTresGumiShipEffectSetComponent;
class UTresGumiShipWeaponSequence;

UCLASS(Abstract)
class ATresGumiShipSpWeaponConnection : public ATresGumiShipActorBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipStartSpWeapon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipStartCoolDown);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipPause, const bool, bIn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipFinishedAppear);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipFinishCoolDown);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGumiShipChangeSpPoint, const float, fOldPoint, const float, fNewPoint, const float, fRatio);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipConsumptionType m_eConsumptionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dConsumptionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWaitForAppearEffect;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresGumiShipEffectSetComponent* m_pEffectSet;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipWeaponSequence* m_pWeaponSequence;
    
public:
    ATresGumiShipSpWeaponConnection();
private:
    UFUNCTION()
    void _CheckAttackTerm(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort, bool& rbCanAttack);
    
};

