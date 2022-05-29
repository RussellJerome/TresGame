#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttractionPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAttractionPawnWaterRide.generated.h"

class AActor;
class UStaticMesh;
class UParticleSystem;
class ATresCameraNormal;
class UMaterialInstanceDynamic;
class UParticleSystemComponent;
class USplineComponent;
class USQEXSEADZeroOneSeComponent;

UCLASS()
class ATresAttractionPawnWaterRide : public ATresAttractionPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> m_RoadActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UStaticMesh*> m_MeshAssetList;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AppearEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffAssetStart;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GroundJumpEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AirJumpEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LandEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FinishEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_AppearMotionLagTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MeshSpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_JumpFallGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_JumpMoveTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RoadSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RoadOnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RoadOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_SlideBaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_SlideMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_SlideMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_SlideAcc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FinishSlowDis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FinishSlowNewTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FinishSlowInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FinishSlowTime;
    
private:
    UPROPERTY()
    ATresCameraNormal* m_Camera;
    
    UPROPERTY()
    AActor* m_RoadActor;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_pEffStart;
    
    UPROPERTY()
    TArray<UMaterialInstanceDynamic*> m_MeshDynamicMaterialList;
    
    UPROPERTY(Export)
    USplineComponent* m_Spline;
    
    UPROPERTY(Export, Transient)
    USQEXSEADZeroOneSeComponent* m_LoopSE;
    
public:
    ATresAttractionPawnWaterRide();
    UFUNCTION(BlueprintCallable)
    bool IsFinishSlideBlockCollision(float InForwardDistance, float InRadius);
    
    UFUNCTION(BlueprintPure)
    FRotator GetSlideRotation(float InForwardDistance) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSlideLocation(float InForwardDistance) const;
    
    UFUNCTION(BlueprintPure)
    float GetFinishSlideDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetFinishLastDisRate() const;
    
};

