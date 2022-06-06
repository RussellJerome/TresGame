#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "EBX901_ActionTriggerType.h"
#include "EX901_ActionKey.h"
#include "Engine/EngineTypes.h"
#include "TresEnemy_e_bx901_ActionTriggerVolume.generated.h"

class ATresEnemyPawn_e_bx901;
class UPrimitiveComponent;
class AActor;

UCLASS()
class ATresEnemy_e_bx901_ActionTriggerVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<EBX901_ActionTriggerType> m_TriggerType;
    
    UPROPERTY(EditInstanceOnly)
    FEX901_ActionKey m_ActionKeyInfo;
    
protected:
    UPROPERTY()
    TWeakObjectPtr<ATresEnemyPawn_e_bx901> m_pDarkBaymaxPawn;
    
public:
    ATresEnemy_e_bx901_ActionTriggerVolume();
private:
    UFUNCTION()
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

