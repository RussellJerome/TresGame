#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "BigTornadoProjPosBoneInfo.h"
#include "BigTornadoHomingProjInfo.h"
#include "BigTornadoProjInfo.h"
#include "TornadoBlowSet.h"
#include "DiveAttackPosition_e_he903.h"
#include "TresAttack7_e_he903_BigTornado.generated.h"

class ATresProjectileBase;
class ATresCameraHe903;

UCLASS(HideDropdown)
class UTresAttack7_e_he903_BigTornado : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FBigTornadoProjPosBoneInfo m_ProjPosBoneInfoArray[2];
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FBigTornadoProjInfo> m_ProjInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FBigTornadoHomingProjInfo> m_HomingProjInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iHomingProjDenominator;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iHomingProjCountOffset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_fHomingIgnoreTimeAfterHit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLoopEndTargetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDiveAttackHeight;
    
    UPROPERTY(EditDefaultsOnly)
    FDiveAttackPosition_e_he903 m_DiveAttackPosition;
    
    UPROPERTY(EditDefaultsOnly)
    FTornadoBlowSet m_BlowSet;
    
protected:
    UPROPERTY()
    TArray<ATresProjectileBase*> m_ProjArray;
    
    UPROPERTY(Transient)
    ATresCameraHe903* m_Camera;
    
public:
    UTresAttack7_e_he903_BigTornado();
};

