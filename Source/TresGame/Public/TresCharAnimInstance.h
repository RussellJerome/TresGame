#pragma once
#include "CoreMinimal.h"
#include "TresAnimInstance.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresCharAnimInstance.generated.h"

UCLASS(NonTransient)
class TRESGAME_API UTresCharAnimInstance : public UTresAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float VelocityXY;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float VelocityZ;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FVector Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float AccelerationXY;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float AccelerationZ;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    uint8 bIsSlotAnimPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    uint8 bIsRunMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float m_LegIKAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float m_LegIKOffset;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float m_ArmIKAlpha;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float RLegIKRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float LLegIKRate;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float LookAtRate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LookAtParamA;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator LookAtEyeRot;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float MyOwnerLookAtParamA;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 m_bIsDirectLookAt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    float m_FaceAnimBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Interp)
    float blendBodyWeight;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Interp)
    float blendFaceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Interp)
    float blendMouthWeight;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Interp)
    float blendKubiWeight;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Interp)
    float blendAtamaWeight;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Interp)
    FRotator rotatorKubi;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Interp)
    FRotator rotatorAtama;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    uint8 IKinemaSW: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FBoneReference m_AlterBone;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bUseLookAtLocationUpdateInterval: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_LookAtLocationUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 m_LookAtLocationBufNum;
    
public:
    UTresCharAnimInstance();
};

