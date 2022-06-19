#pragma once
#include "CoreMinimal.h"
#include "TresSavePointActivateSignatureDelegate.h"
#include "TresPlayerStart.h"
#include "TresReactorComponentInterface.h"
#include "TresReactorDoCommandSignatureDelegate.h"
#include "ETresSavePointDispType.h"
#include "TresSavePointActor.generated.h"

class UParticleSystemComponent;
class UTresMapMarkerComponent;
class UTresSavePointRecoverComponent;
class UTresReactorComponent;
class UParticleSystem;
class ATresCharPawnBase;

UCLASS(Abstract, Config=Game)
class ATresSavePointActor : public ATresPlayerStart, public ITresReactorComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresSavePointRecoverComponent* MyRecover;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresMapMarkerComponent* MyMapMarker;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bAutoActivate: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint32 m_bGimmickComponentAutoLinkActivate: 1;
    
    UPROPERTY()
    uint32 m_bIsActive: 1;
    
    UPROPERTY(DuplicateTransient, Transient)
    uint32 m_bIsAccessed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bLimitedSavePoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_BaseEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_LimitBaseEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_BodyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_LimitBodyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_HealEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ClipOutDistance;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pBaseEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pBodyEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pHealEffect;
    
    UPROPERTY(DuplicateTransient, Transient)
    ATresCharPawnBase* m_pCheckPawn;
    
public:
    UPROPERTY(BlueprintAssignable)
    FTresReactorDoCommandSignature OnReactorDoCommand;
    
    UPROPERTY(BlueprintAssignable)
    FTresSavePointActivateSignature OnGimmickActivate;
    
    ATresSavePointActor();
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveGimmickActivate(bool bEnable);
    
protected:
    UFUNCTION()
    void OnChangeSavePointDispType(ETresSavePointDispType InDispType);
    
    UFUNCTION()
    void OnChangePlayerArtsMode(bool bIsArtsMode);
    
    UFUNCTION()
    void OnChangeCinematicMode(bool bIsCinematicMode);
    
    UFUNCTION()
    void OnChangeBattleMode(bool bIsBattleMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void BP_SetDisableMode(bool bIsDisable);
    
    UFUNCTION(BlueprintPure)
    bool BP_IsGimmickActive() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_DeactivateGimmickComponentAll();
    
    UFUNCTION(BlueprintCallable)
    void BP_DeactivateGimmick();
    
    UFUNCTION(BlueprintCallable)
    void BP_ActivateGimmickComponentAll();
    
    UFUNCTION(BlueprintCallable)
    void BP_ActivateGimmick();
    
    
    // Fix for true pure virtual functions not being implemented
};

