#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamHomingMoveInfo.generated.h"

class ATresProjectileBase;
class AActor;

USTRUCT(BlueprintType)
struct FEX359_BeamHomingMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fInitVelocity;
    
    UPROPERTY()
    bool m_bResetInitVelocity;
    
    UPROPERTY()
    bool m_bAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxMoveDistance;
    
    UPROPERTY()
    bool m_bMaxMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bHoming;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingMinDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingIgnoreMaxAngleTime;
    
protected:
    UPROPERTY()
    ATresProjectileBase* m_Projectile;
    
    UPROPERTY()
    AActor* m_Target;
    
public:
    TRESGAME_API FEX359_BeamHomingMoveInfo();
};

