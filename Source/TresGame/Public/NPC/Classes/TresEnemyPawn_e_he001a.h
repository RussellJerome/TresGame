#pragma once
#include "CoreMinimal.h"
#include "TresAnims_e_he001a.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_he001a.generated.h"

class UParticleSystem;
class AActor;
class UTresSkeletalMeshComponent;
class USQEX_ParticleAttachDataAsset;
class ATresRailSlideActor;
class UParticleSystemComponent;

UCLASS()
class ATresEnemyPawn_e_he001a : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyCollMesh;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresAnims_e_he001a> m_Anims;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChanceSlowRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ChanceHitMax;
    
    UPROPERTY(Transient)
    ATresRailSlideActor* m_RollerCoasterRailStart;
    
    UPROPERTY(Transient)
    AActor* m_RollerCoasterCancel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FaceSlotBlendTime;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_BreakEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BlurEffData1;
    
public:
    UPROPERTY(EditAnywhere)
    float m_Attack234_WindRadius;
    
    UPROPERTY(EditAnywhere)
    float m_Attack234_WindStrength;
    
    UPROPERTY(EditAnywhere)
    float m_Attack234_WindSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_Attack234_WindTime;
    
protected:
    UPROPERTY(Export)
    UParticleSystemComponent* m_BlurEff;
    
public:
    ATresEnemyPawn_e_he001a();
    UFUNCTION(BlueprintPure)
    bool IsRollerCoaster() const;
    
    UFUNCTION(BlueprintPure)
    bool IsRightLegBreak() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLeftLegBreak() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDown() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableLockon(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CancelHe001DownEvent();
    
};

