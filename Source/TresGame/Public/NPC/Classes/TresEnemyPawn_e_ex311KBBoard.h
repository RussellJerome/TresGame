#pragma once
#include "CoreMinimal.h"
#include "TresPawnBase.h"
#include "TresEnemyPawn_e_ex311KBBoard.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class ATresEnemyPawn_e_ex311;

UCLASS()
class ATresEnemyPawn_e_ex311KBBoard : public ATresPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_KBBoardPopParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_KBBoardParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NotChangeDirDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ARoundModeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ARoundModeAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ARoundModeSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PopDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PopAddRise;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NotRotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KBFadeOutTime;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_KBBoardParticle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_KBBoardPopParticle;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex311* m_MyParent;
    
public:
    ATresEnemyPawn_e_ex311KBBoard();
};

