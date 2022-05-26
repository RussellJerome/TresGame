#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresEwCharacterManageTask.generated.h"

class UParticleSystemComponent;
class UTresEwOpacityListAsset;

UCLASS()
class UTresEwCharacterManageTask : public UTresTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UTresEwOpacityListAsset* m_OpacityListAsset;
    
public:
    UTresEwCharacterManageTask();
    UFUNCTION(BlueprintCallable)
    void SetPlayerAlpha(float Rate, int32 Num, bool bCash);
    
    UFUNCTION(BlueprintCallable)
    void SetOpacityListAsset(UTresEwOpacityListAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachPlayerParticle(UParticleSystemComponent* Particle);
    
    UFUNCTION(BlueprintPure)
    int32 GetExistNum();
    
    UFUNCTION(BlueprintPure)
    int32 GetCreateNum();
    
    UFUNCTION(BlueprintPure)
    float GetCashRate();
    
    UFUNCTION(BlueprintPure)
    int32 GetCashNum();
    
    UFUNCTION(BlueprintPure)
    UParticleSystemComponent* GetAttachPlayerParticle();
    
    UFUNCTION(BlueprintCallable)
    void EnableOpacity(bool bEnable, bool bComplete, int32 randPaternNum);
    
};

