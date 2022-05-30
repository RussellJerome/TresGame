#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresDisneyMagicPawnBase.h"
#include "TresDisneyMagicPawnSimba.generated.h"

class UParticleSystem;
class UCameraShake;
class USQEX_ParticleAttachDataAsset;
class ATresProjectileBase;

UCLASS()
class ATresDisneyMagicPawnSimba : public ATresDisneyMagicPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetJumpAttack;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCameraShake> m_CameraShakeJumpAttack;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjRoar;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjFinishExp;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Param_bJumpAutoMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_JumpPressZ;
    
    ATresDisneyMagicPawnSimba();
};

