#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkPawnBase.h"
#include "TresFriendLinkPawnMountCurling.generated.h"

class ATresCameraNormal;
class UParticleSystem;
class USoundBase;
class UAudioComponent;

UCLASS()
class ATresFriendLinkPawnMountCurling : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_FirstSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DownStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_DownSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_EndSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_RotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Param_RotuUiform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_WallHitSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_WallHitRotLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MeshFloorPitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CamTargetOfsZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CamPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CamDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CamTurningPower;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_RunEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_RbdEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_KzkEff;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_LoopSEAsset;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_LandSEAsset;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_DashSEAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Param_DebugEventCutFlag;
    
private:
    UPROPERTY()
    ATresCameraNormal* m_Camera;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* m_LoopSE;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_PuddingFirstSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_PuddingMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_PuddingAddSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_PuddingAddRate;
    
    ATresFriendLinkPawnMountCurling();
};

