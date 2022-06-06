#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack8_e_he001a_Needle.generated.h"

class ATresProjectileBase;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack8_e_he001a_Needle : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_NeedleProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NeedleSpawnCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NeedleSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NeedleDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NeedleDistanceRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NeedleDistance2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NeedleDistanceRange2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NeedleSignTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_NeedleSignEffData;
    
    UPROPERTY(Export)
    TArray<UParticleSystemComponent*> m_NeedleSignEff;
    
public:
    UTresAttack8_e_he001a_Needle();
};

