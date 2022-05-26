#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "Engine/EngineTypes.h"
#include "ETresGumiShipWeaponSequencePort.h"
#include "TresGumiShipSpecialWeaponBaseActor.generated.h"

class UTresGumiShipWeaponSequence;
class USceneComponent;
class AActor;
class UTresSkeletalMeshComponent;
class UTresGumiShipEffectSetComponent;
class UPrimitiveComponent;

UCLASS(Abstract)
class ATresGumiShipSpecialWeaponBaseActor : public ATresGumiShipActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipWeaponSequence* m_pWeaponSequence;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* m_pMeshBasePoint;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSkeletalMeshComponent* m_pSkeltalWeaponMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresGumiShipEffectSetComponent* m_pEffectSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAppearDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fReAppearDelayTime;
    
public:
    ATresGumiShipSpecialWeaponBaseActor();
protected:
    UFUNCTION()
    void _OnRequestPause(const bool bIn);
    
    UFUNCTION()
    void _OnFinishedAppearConnection();
    
    UFUNCTION()
    void _OnComponentEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex);
    
    UFUNCTION()
    void _OnComponentBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
    UFUNCTION()
    void _OnChangeSpPoint(const float fOldPoint, const float fNewPoint, const float fRatio);
    
    UFUNCTION()
    void _CheckAttackTerm(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort, bool& rbCanAttack);
    
};

