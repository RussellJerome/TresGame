#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCharPawnBase.h"
#include "TresEnemyPawn_e_ex781_TetraBitManager.generated.h"

class UParticleSystem;
class ATresEnemyPawn_e_ex781_TetraBit;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class ATresEnemyPawn_e_ex781_TetraBitManager : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEnemyPawn_e_ex781_TetraBit> m_TetraBitClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_TriangleParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_RiseParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ShotParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FormationOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FormationMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FormationMoveSubSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FormationDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FormationDeg;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NormalMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NormalMoveSubSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TriangleOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float mRiseEffectCheckHight;
    
    UPROPERTY(EditDefaultsOnly)
    float mBodyColScaleSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float mBodyColOffsetUseHigh;
    
    UPROPERTY(EditDefaultsOnly)
    float mBodyColOffsetZ;
    
private:
    UPROPERTY()
    TArray<TWeakObjectPtr<ATresEnemyPawn_e_ex781_TetraBit>> m_BitList;
    
    UPROPERTY()
    ATresCharPawnBase* m_MyTarget;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_TriangleParticle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ShotParticle;
    
public:
    ATresEnemyPawn_e_ex781_TetraBitManager();
};

