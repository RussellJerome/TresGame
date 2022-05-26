#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresDisneyMagicPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresDisneyMagicPawnStitch.generated.h"

class USQEX_ParticleAttachDataAsset;
class ATresProjectileBase;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS()
class ATresDisneyMagicPawnStitch : public ATresDisneyMagicPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Proj;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetLineParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetLineParticleFinish;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetPolyParticle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetAreaAttack0;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetBeam0;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetBeam1;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetBeam2;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetPoint0;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetPointFinish;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetPointAreaDecide;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetFinishLightning;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetFinishPointGouraud;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetFinishAreaLast;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetFinishPoleLast;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAssetSora;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAssetStitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Param_Dist2DMax;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_pEffLine;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pEffPoly;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pEffBeam0;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pEffBeam1;
    
    UPROPERTY(Export)
    TArray<UParticleSystemComponent*> m_SegmentEffList;
    
    UPROPERTY(Export)
    TArray<UParticleSystemComponent*> m_PointEffList;
    
    UPROPERTY(Export)
    TArray<UParticleSystemComponent*> m_PointAreaDecideEffList;
    
public:
    ATresDisneyMagicPawnStitch();
    UFUNCTION(BlueprintCallable)
    FVector GetNextFinishPoint(int32 InAddNext);
    
};

