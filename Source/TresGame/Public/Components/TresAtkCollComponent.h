#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresAtkColHitEffect.h"
#include "TresAtkCollShapeAssetUnit.h"
#include "TresAtkCollAutoActivate.h"
#include "TresAtkCollComponent.generated.h"

class AActor;
class UTresChrBaseParam;
class UTresChrDataTableSet;
class UTresAtkCollPrimitive;
class ATresAtkCollManager;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TRESGAME_API UTresAtkCollComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, Transient)
    TArray<AActor*> m_IgnoreActors;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    UTresChrBaseParam* m_pOwnerBaseParam;
    
    UPROPERTY(DuplicateTransient, Transient)
    UTresChrDataTableSet* m_pOwnerDataTableSet;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresAtkCollShapeAssetUnit> CollisionShapesSrc;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresAtkColHitEffect> m_HitEffects;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHitEffectRandomOffsetRadius;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresAtkCollAutoActivate> m_CollAutoActivate;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    TArray<UTresAtkCollPrimitive*> m_AtkColls;
    
private:
    UPROPERTY(DuplicateTransient, Transient)
    ATresAtkCollManager* m_Mgr;
    
public:
    UTresAtkCollComponent();
};

