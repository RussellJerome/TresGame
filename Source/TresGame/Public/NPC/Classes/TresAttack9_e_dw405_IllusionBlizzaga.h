#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresE_dw405IllusionBlizzagaProjectileParam.h"
#include "TresAttack_e_dw405_Base.h"
#include "Base/TresAttack_e_dw405_Base.h"
#include "TresAttack9_e_dw405_IllusionBlizzaga.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack9_e_dw405_IllusionBlizzaga : public UTresAttack_e_dw405_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Distance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Height;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresE_dw405IllusionBlizzagaProjectileParam> m_ProjectileParams;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsBlizzagaAppearTimingAnimStart: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ActionEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BlizzagaVelocityRate;
    
public:
    UTresAttack9_e_dw405_IllusionBlizzaga();
};

