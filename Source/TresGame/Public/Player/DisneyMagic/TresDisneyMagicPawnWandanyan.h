#pragma once
#include "CoreMinimal.h"
#include "TresDisneyMagicPawnBase.h"
#include "TresDisneyMagicPawnWandanyan.generated.h"

class ATresCameraNormal;

UCLASS()
class ATresDisneyMagicPawnWandanyan : public ATresDisneyMagicPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresCameraNormal* m_pCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMoveSpeedLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMoveSpeedLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMoveSpeedLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMoveSpeedLv4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMoveSpeedLv5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraAimZLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraAimZLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraAimZLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraAimZLv4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraAimZLv5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraDistLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraDistLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraDistLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraDistLv4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraDistLv5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraPitchLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraPitchLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraPitchLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraPitchLv4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraPitchLv5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraAngleLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraAngleLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraAngleLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraAngleLv4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fCameraAngleLv5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fJumpGravityRateLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fJumpGravityRateLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fJumpGravityRateLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fJumpGravityRateLv4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fJumpGravityRateLv5;
    
    ATresDisneyMagicPawnWandanyan();
};

