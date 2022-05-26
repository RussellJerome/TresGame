#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipWeaponPrimitive.h"
#include "ETresGumiShipWeaponSequencePort.h"
#include "TresGumiShipWeaponSequence.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipWeaponSequence : public UTresGumiShipWeaponPrimitive {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresGumiShipRequestAttack, const TEnumAsByte<ETresGumiShipWeaponSequencePort>, ePort, bool&, rbCanAttack);
    
private:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool m_bInheritOwnerCoord;
    
public:
    UTresGumiShipWeaponSequence();
    UFUNCTION(BlueprintCallable)
    void SetAttackCollisionOff(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopNormalAttack(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopAttackAll();
    
    UFUNCTION(BlueprintCallable)
    void RequestStartNormalAttack(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort, const bool bManual, const bool bForce);
    
};

