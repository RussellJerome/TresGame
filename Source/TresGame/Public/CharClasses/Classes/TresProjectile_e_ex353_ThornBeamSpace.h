#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectile_e_ex353_Base.h"
#include "TresEnemyEx353ThornBeamProjectileInfo.h"
#include "TresEnemyEx353ThornBeamAfterHitInfo.h"
#include "TresProjectile_e_ex353_ThornBeamSpace.generated.h"

class ATresProjectile_e_ex353_ThornBeam;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class ATresProjectile_e_ex353_ThornBeamSpace : public ATresProjectile_e_ex353_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex353_ThornBeam> m_ThornBeamClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_ex353_ThornBeam> m_ThornBeamThornWildDanceClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ThornBeamSpaceAsset;
    
    UPROPERTY()
    TArray<int32> m_AlreadyFireIndexList;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ThornBeamSpaceCmp;
    
    UPROPERTY()
    TArray<FTresEnemyEx353ThornBeamProjectileInfo> m_ThornBeamProjectileInfo;
    
    UPROPERTY()
    FTresEnemyEx353ThornBeamAfterHitInfo m_AfterHitInfo;
    
    ATresProjectile_e_ex353_ThornBeamSpace();
};

