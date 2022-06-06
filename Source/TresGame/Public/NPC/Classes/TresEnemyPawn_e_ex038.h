#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex038.generated.h"

class USQEX_ParticleAttachDataAsset;
class ATresProjectileBase;
class UParticleSystemComponent;

UCLASS()
class ATresEnemyPawn_e_ex038 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ATresProjectileBase* m_pAeroCutter[3];
    
    UPROPERTY()
    bool m_bMagicSquare;
    
    UPROPERTY(Export)
    TArray<UParticleSystemComponent*> m_RotEff;
    
public:
    UPROPERTY(EditDefaultsOnly)
    float m_AeroCutter_ScaleHigh;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AeroCutter_ScaleMiddle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AeroCutter_ScaleLow;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AeroCutter_BodyDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AeroCutter_PosOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AeroCutter_PosRangeZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AeroCutter_HighRotSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AeroCutter_MiddleRotSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AeroCutter_LowRotSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Attack2_VanishTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Attack2_FireAeroStormTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Attack2_DistSt;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Attack2_DistEnd;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Attack2_RotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Attack2_AeroStormMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Attack2_AeroStormMoveSpeedTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Attack2_AeroStormMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_Attack2_AeroStormTurnRate;
    
    ATresEnemyPawn_e_ex038();
    UFUNCTION(BlueprintCallable)
    bool IsMagicSquare();
    
    UFUNCTION(BlueprintCallable)
    bool IsAeroCutterMax();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAeroCutterNum();
    
    UFUNCTION(BlueprintCallable)
    void Debug_ForcingCancelMagicSquare();
    
};

