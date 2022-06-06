#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex361_ThunderInfo.h"
#include "TresProjectileGenerator_e_ex361_DarkHand_Thunder.generated.h"

class UParticleSystem;

UCLASS()
class ATresProjectileGenerator_e_ex361_DarkHand_Thunder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresEnemy_e_ex361_ThunderInfo> m_ThunderInfo;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_ThunderEffData;
    
public:
    ATresProjectileGenerator_e_ex361_DarkHand_Thunder();
};

