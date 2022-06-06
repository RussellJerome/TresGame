#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex355_Claymore_Base.h"
#include "EX355_ThrowInfoSet.h"
#include "TresProjectile_e_ex355_Claymore_Throw.generated.h"

class AActor;
class UTresLockonTargetComponent;
class UEnvQuery;

UCLASS(Abstract)
class ATresProjectile_e_ex355_Claymore_Throw : public ATresProjectile_e_ex355_Claymore_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEX355_ThrowInfoSet m_ThrowInfoSet;
    
    UPROPERTY(EditDefaultsOnly, Export)
    UTresLockonTargetComponent* m_LockonComp;
    
    UPROPERTY()
    AActor* m_TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bDebugDispRotateVelocity;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float m_fCurrentHomingRotateVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_ThrowSpawn;
    
    ATresProjectile_e_ex355_Claymore_Throw();
};

