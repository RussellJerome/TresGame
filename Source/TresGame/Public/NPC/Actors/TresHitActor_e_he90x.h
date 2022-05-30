#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresHitActor_e_he90x_Setup.h"
#include "UObject/NoExportTypes.h"
#include "TresHitActor_e_he90x.generated.h"

class UTresStaticMeshComponent;
class UStaticMeshComponent;

UCLASS(HideDropdown)
class ATresHitActor_e_he90x : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UTresStaticMeshComponent* m_MyCollMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UStaticMeshComponent* m_MyOverlapMesh;
    
    UPROPERTY(EditDefaultsOnly)
    FTresHitActor_e_he90x_Setup m_CollisionSetup;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnablePlayerTickCheck;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    bool m_bDebugCollDisabled;
    
public:
    ATresHitActor_e_he90x();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCollSize(float InRadius, float inHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionEnabled(bool inSet, float inHeight, float InRadius, FVector inCenterOffset);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(AActor* inOtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* inOtherActor);
    
    UFUNCTION(BlueprintPure)
    bool IsCollisionEnabled() const;
    
};

