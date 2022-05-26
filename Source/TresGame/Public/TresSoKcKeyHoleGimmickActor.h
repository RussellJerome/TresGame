#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSoKcKeyHoleConnectNode.h"
#include "TresSoKcKeyHoleGimmickActor.generated.h"

class UTresBodyCollPrimitive;
class USceneComponent;
class UTresBodyCollComponent;
class UParticleSystem;

UCLASS(Abstract)
class ATresSoKcKeyHoleGimmickActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    USceneComponent* KeyHoleRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    USceneComponent* KeyHoleBeamAttachPoint;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    UTresBodyCollPrimitive* KeyHoleBodyCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    UTresBodyCollPrimitive* ChanceMarkerBodyCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* TresBodyCollisionComponent;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pConnectBeamEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pKeyHoleFocusEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pKeyHoleConnectEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pChanceMarkerConnectEffectAsset;
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    TArray<UParticleSystem*> m_ChanceMarkerEffectAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pBigChanceMarkerEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pBigChanceMarkerConnectEffectAsset;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bExcludeChanceMarkerCandidate;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FTresSoKcKeyHoleConnectNode> m_ConnectableKeyHoleList;
    
public:
    ATresSoKcKeyHoleGimmickActor();
};

