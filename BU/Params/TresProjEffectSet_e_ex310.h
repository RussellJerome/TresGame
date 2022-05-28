#pragma once
#include "CoreMinimal.h"
#include "TresProjEffectSet_e_ex310.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class UTresSkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FTresProjEffectSet_e_ex310 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AppearEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AppearEffectAttach;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearVisibleDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsEnableAppearScaleAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsDelayAppearScaleAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearScaleAnimTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearScaleAnimStartScale;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsEnableAppearDitherAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsDelayAppearDitherAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDitherAnimTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AppearDitherAnimStartValue;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DisappearEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_DisappearEffectAttach;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisappearVisibleDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsEnableDisappearScaleAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisappearScaleAnimTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisappearScaleAnimEndScale;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsEnableDisappearDitherAnim: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisappearDitherAnimTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisappearDitherAnimEndValue;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsNotifyOnlyVisible: 1;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_pEffect;
    
    UPROPERTY(Export, Transient)
    UTresSkeletalMeshComponent* MyMesh;
    
    TRESGAME_API FTresProjEffectSet_e_ex310();
};

