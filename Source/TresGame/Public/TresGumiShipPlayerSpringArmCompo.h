#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCustomSpringArmCompoBase.h"
#include "TresGMInputResult.h"
#include "LockAtChangeInfo.h"
#include "CameraSensitivityInfoSet.h"
#include "TresGumiShipPlayerSpringArmCompo.generated.h"

class ATresGumiShipPlayerControllerBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayerSpringArmCompo : public UTresGumiShipCustomSpringArmCompoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bReversePitch;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bReverseYaw;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fPitchUpLimit;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fPitchDownLimit;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fTimeOfResetStart;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fResetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fAutoResetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fDoResetRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLockAtChangeInfo m_LockAtInterpInfoForDo;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FLockAtChangeInfo m_LockAtInterpInfoForUndo;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FCameraSensitivityInfoSet m_MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FCameraSensitivityInfoSet m_OtherSensitivity;
    
public:
    UTresGumiShipPlayerSpringArmCompo();
private:
    UFUNCTION()
    void _OnInputRStickV2(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
};

