#pragma once
#include "CoreMinimal.h"
#include "ETresRalphBlockKind.h"
#include "GameFramework/Actor.h"
#include "TresNotifyInterface.h"
#include "TresActorInterface.h"
#include "TresDisneyMagicActorRalphBlock.generated.h"

class UTresBodyCollComponent;
class UTresStaticMeshComponent;
class UParticleSystem;
class UTresAtkCollComponent;
class ATresDisneyMagicActorRalphBlock;

UCLASS()
class ATresDisneyMagicActorRalphBlock : public AActor, public ITresNotifyInterface, public ITresActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ETresRalphBlockKind> m_BlockKind;
    
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetExplosion;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetDisappear;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresAtkCollComponent* MyAtkColl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* MyBodyColl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyPenetrationEffectMesh;
    
    UPROPERTY()
    TArray<ATresDisneyMagicActorRalphBlock*> m_ChainBlockList;
    
public:
    ATresDisneyMagicActorRalphBlock();
    UFUNCTION()
    void OnChangeGimmickPause(bool bPause);
    
    
    // Fix for true pure virtual functions not being implemented
};

