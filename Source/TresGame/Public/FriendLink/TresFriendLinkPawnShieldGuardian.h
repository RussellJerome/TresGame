#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkPawnBase.h"
#include "TresFriendLinkPawnShieldGuardian.generated.h"

UCLASS()
class ATresFriendLinkPawnShieldGuardian : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Param_ArmorBodyHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_SmallDamageBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_SmallDamagePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BlowDamageBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_BlowDamagePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_MeshFloorPitchLimit;
    
    ATresFriendLinkPawnShieldGuardian();
};

