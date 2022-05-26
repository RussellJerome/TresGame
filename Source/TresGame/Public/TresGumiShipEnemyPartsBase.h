#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCharaPawnBase.h"
#include "TresGumiShipEnemyPartsBase.generated.h"

class USQEX_ParticleAttachDataAsset;
class ATresGumiShipEnemyPawnBase;

UCLASS(Abstract)
class ATresGumiShipEnemyPartsBase : public ATresGumiShipCharaPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName m_EnemyPartsID;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_pEffectAttachDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUsingAutoDestorySystem;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDestoryWithMeshFadeOut;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPartsDestoryFadeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPartsMeshHideDelayTime;
    
public:
    ATresGumiShipEnemyPartsBase();
    UFUNCTION(BlueprintCallable)
    void SetLockOnPermissionAll(bool LockOnEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachEffectsVisibility(bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMeshVisibility(bool Visibility);
    
    UFUNCTION(BlueprintPure)
    bool IsLockOnPermissionOK() const;
    
    UFUNCTION(BlueprintCallable)
    void HideEnemyParts(bool HiddenEnable);
    
    UFUNCTION(BlueprintPure)
    ATresGumiShipEnemyPawnBase* GetPartsOwnerEnemy() const;
    
    UFUNCTION(BlueprintPure)
    FName GetEnemyPartsID() const;
    
};

