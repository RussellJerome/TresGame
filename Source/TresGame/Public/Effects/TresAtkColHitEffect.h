#pragma once
#include "CoreMinimal.h"
#include "TresAtkCollHitEffUnit.h"
#include "TresDecalData.h"
#include "TresAtkColHitEffect.generated.h"

class UParticleSystem;
class USoundBase;

USTRUCT(BlueprintType)
struct FTresAtkColHitEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_GrpName;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* m_PawnHitEffect;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_PawnHitSEAsset;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* m_PawnHitEffectPerAttr[8];
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_PawnHitSEAssetPerAttr[8];
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* m_DirectHitEffect;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bChangeMapHit: 1;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* m_MapHitEffect;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bChangeSEMapHit: 1;
    
    UPROPERTY(EditAnywhere)
    USoundBase* m_MapHitSEAsset;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bEnableDecal: 1;
    
    UPROPERTY(EditAnywhere, Export, NoClear)
    FTresDecalData m_DecalData;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresAtkCollHitEffUnit> m_HitEffSet;
    
    TRESGAME_API FTresAtkColHitEffect();
};

