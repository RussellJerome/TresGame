#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresPrizeBase.generated.h"

class UTresRootComponent;
class USoundBase;
class UTresPrizeMovementComponent;
class ATresCharPawnBase;

UCLASS(Abstract, Config=Game)
class ATresPrizeBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* m_SoundBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* m_SoundGet;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresRootComponent* MyRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresPrizeMovementComponent* MyMovement;
    
    UPROPERTY(Transient)
    float m_FrameRate;
    
    UPROPERTY(Transient)
    float m_Timer;
    
    UPROPERTY(Transient)
    int32 m_Kind;
    
    UPROPERTY(Transient)
    float m_fLivingTime;
    
    UPROPERTY(Transient)
    uint8 m_bCanGetFlag: 1;
    
    UPROPERTY(Transient)
    uint8 m_bGetSeEndFlag: 1;
    
    UPROPERTY()
    ATresCharPawnBase* m_pGetter;
    
    UPROPERTY(Transient)
    float m_fLen;
    
    UPROPERTY(Transient)
    FVector m_vDir;
    
public:
    ATresPrizeBase();
    UFUNCTION()
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
};

