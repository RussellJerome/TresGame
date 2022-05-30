#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickDitherFadeInterface.h"
#include "Engine/EngineTypes.h"
#include "TresDamageInfo.h"
#include "UObject/NoExportTypes.h"
#include "ETresGimmickBxSingoukiColorType.h"
#include "TresGimmickBxSingouki.generated.h"

class ASQEX_SplineActor;
class USceneComponent;
class UTresStaticMeshComponent;
class UTresPoleComponent;
class ATresGimmickBxSingouki;
class UParticleSystem;
class AController;
class UPrimitiveComponent;
class AActor;

UCLASS(Config=Game)
class ATresGimmickBxSingouki : public ATresGimmickActor, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* SingoukiRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresPoleComponent* PoleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ATresGimmickBxSingouki*> SameSignals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ATresGimmickBxSingouki*> OppositeSignals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ASQEX_SplineActor*> CourseSplineActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ASQEX_SplineActor*> CourseOppositeSplineActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* BreakEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlueTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OnlyVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableCollision;
    
    ATresGimmickBxSingouki();
private:
    UFUNCTION()
    void TresTakeDamageSingouki(float DamagePoint, AController* InstigatedBy, const FHitResult& HitInfo, const FTresDamageInfo& DamageInfo, FVector ShotFromDirection, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetManualColor(bool bManual, ETresGimmickBxSingoukiColorType Color);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PrizeTakeDamage(AActor* Causer, const FHitResult& HitInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBreakSignal();
    
private:
    UFUNCTION()
    void ComponentHitSingouki(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BreakSignal();
    
    
    // Fix for true pure virtual functions not being implemented
};

