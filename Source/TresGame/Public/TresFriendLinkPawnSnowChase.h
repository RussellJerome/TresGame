#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkPawnBase.h"
#include "TresFriendLinkPawnSnowChase.generated.h"

class ATresCameraSnowChase;
class UParticleSystem;
class USQEX_ParticleAttachDataAsset;
class UTresFieldVoice;
class AActor;

UCLASS()
class ATresFriendLinkPawnSnowChase : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Acceleration_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSideVelocity_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SideAcceleration_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SideDeceleration_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageDeceleration_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageAccelerationDelayTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageUnconrollableTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpDeniedTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LandingDeceleration_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallHitDelayTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallHitDeceleration_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraLookAtOffsetZ_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraDistance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraPitch_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraWallLookAtOffsetStart_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraWallLookAtOffsetFinal_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CameraWallLookAtOffsetType_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LeftScaleParam_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RightScaleParam_;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ATresCameraSnowChase* Camera_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* SlideEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* SlideRotationEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* WindEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* BlizzardEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ShortJumpLandEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* WheelTrackEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* AvalancheDamageEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* AvalanchePostEffect_;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* BlizzardAttachData_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EventCutFlag_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableInputMove_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEnableEquipmentSnowDepth_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShortJumpVectorLerpTime_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FallAcceleration_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DamageHitAvalanche_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UTresFieldVoice*> DamageVoices_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UTresFieldVoice*> GameOverVoices_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UTresFieldVoice*> AvalancheVoices_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UTresFieldVoice*> AvalancheVoicesLong_;
    
    ATresFriendLinkPawnSnowChase();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SnowChaseSetCameraAreaBox(AActor* inActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SnowChaseApplayAvalancheDamage();
    
};

