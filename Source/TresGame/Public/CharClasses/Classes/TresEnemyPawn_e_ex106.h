#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex106.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS()
class ATresEnemyPawn_e_ex106 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_LazerPointerEff;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_PointerEff;
    
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LazerEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PointerEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PointerOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_LazerPointerLengthExtra;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_LazerDebug: 1;
    
    ATresEnemyPawn_e_ex106();
    UFUNCTION(BlueprintCallable)
    bool IsMeshVisible();
    
    UFUNCTION(BlueprintCallable)
    void BP_ModifyLazerPointerLength(const FVector& TargetLocation, float LazerPointerScale);
    
    UFUNCTION(BlueprintCallable)
    void BP_InstallationPoint(const FVector& HitLocation);
    
    UFUNCTION(BlueprintCallable)
    void BP_DeletePointer();
    
    UFUNCTION(BlueprintCallable)
    void BP_DeleteLazerPointer();
    
    UFUNCTION(BlueprintCallable)
    void BP_CreatePointer();
    
    UFUNCTION(BlueprintCallable)
    void BP_CreateLazerPointer(FName AttachPointName);
    
};

