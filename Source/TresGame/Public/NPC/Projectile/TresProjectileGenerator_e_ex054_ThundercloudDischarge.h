#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex054_DischargeInfo.h"
#include "GameFramework/Actor.h"
#include "TresProjectileGenerator_e_ex054_ThundercloudDischarge.generated.h"

class UParticleSystem;

UCLASS()
class ATresProjectileGenerator_e_ex054_ThundercloudDischarge : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemy_e_ex054_DischargeInfo> m_DischargeInfo;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_DischargeEffData;
    
public:
    ATresProjectileGenerator_e_ex054_ThundercloudDischarge();
};

