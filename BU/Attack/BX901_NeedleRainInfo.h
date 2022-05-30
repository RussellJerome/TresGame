#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BX901_NeedleRainInfo.generated.h"

class ATresProjectileBase;
class UParticleSystem;
class AActor;

USTRUCT(BlueprintType)
struct FBX901_NeedleRainInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile_Needle_Up;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile_Needle_Fall;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fUpDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFallHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFallRangeRadius;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffectClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEffectHeight;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> m_Target;
    
    TRESGAME_API FBX901_NeedleRainInfo();
};

