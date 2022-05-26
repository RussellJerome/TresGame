#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickDitherFadeInterface.h"
#include "Engine/EngineTypes.h"
#include "TresGimmickBrickStaticBase.generated.h"

class AActor;
class UTresGimmickHitCountComponent;
class UTresStaticMeshComponent;
class UTresNavModifierComponent;

UCLASS(Abstract, Config=Game)
class ATresGimmickBrickStaticBase : public ATresGimmickActor, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresGimmickHitCountComponent* TresGimmickHitCount;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresNavModifierComponent* TresNavModifier;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ImpulseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DitherParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_DitherFadeInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DitherStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DitherTime;
    
    ATresGimmickBrickStaticBase();
protected:
    UFUNCTION()
    void OnTresTakeDamageGimmickCallback(const FHitResult& HitInfo, AActor* DamageCauser);
    
    
    // Fix for true pure virtual functions not being implemented
};

