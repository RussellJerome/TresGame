#pragma once
#include "CoreMinimal.h"
#include "ETresBodyCollision.h"
#include "Components/PrimitiveComponent.h"
#include "TresBodyCollInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ETresBodyCollReactionType.h"
#include "ETresBodyCollOverlapCameraFunction.h"
#include "TresBodyTakeDamageEffect.h"
#include "TresBodyCollPrimitive.generated.h"

class UTresBodyCollPrimitive;
class AActor;
class UStaticMesh;
class UBodySetup;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresBodyCollPrimitive : public UPrimitiveComponent, public ITresBodyCollInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FTresBodyEndOverlapSignature, UTresBodyCollPrimitive*, MyPrimitive, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FTresBodyBeginOverlapSignature, UTresBodyCollPrimitive*, MyPrimitive, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult&, SweepResult);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MyBodyName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint32 MyIgnoreNameNoneGroup: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ETresBodyCollision::Type> MyShapeType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* MyShapeMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector MyShapeSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyReactionType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint32 m_bFixedBodyReactionType: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint32 m_bEnableDamage: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint32 m_bEnablePush: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint32 m_bEnableCamera: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint32 m_bEnableBlockCamera: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ETresBodyCollOverlapCameraFunction> m_OverlapCameraFunction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint32 m_bIsBodyCollBaseLocationDist3D: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FTresBodyTakeDamageEffect> m_DamageEffects;
    
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* m_pBodySetup;
    
    UPROPERTY()
    UBodySetup* m_pSrcBodySetup;
    
    UPROPERTY(DuplicateTransient, Transient)
    ETresBodyCollReactionType m_DefaultBodyReactionType;
    
public:
    UPROPERTY(BlueprintReadOnly)
    FTresBodyBeginOverlapSignature OnTresBodyBeginOverlap;
    
    UPROPERTY(BlueprintReadOnly)
    FTresBodyEndOverlapSignature OnTresBodyEndOverlap;
    
    UTresBodyCollPrimitive();
protected:
    UFUNCTION()
    void OnBodyEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBodyBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    
    // Fix for true pure virtual functions not being implemented
};

