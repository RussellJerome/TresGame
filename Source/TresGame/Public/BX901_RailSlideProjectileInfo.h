#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BX901_RailSlideProjectileInfo.generated.h"

USTRUCT(BlueprintType)
struct FBX901_RailSlideProjectileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bRailSlide;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bRelativeVelocityToOwner;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vInitOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bOwnerAsInitOffsetAxis;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bHoming;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vHomingOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bTargetAsHomingAxis;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinHomingDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHomingVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinHomingDistance_Reflect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingAccel_Reflect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHomingVelocity_Reflect;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_ReflectAttackIDArray;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint32 m_bBoolArray[10];
    
    TRESGAME_API FBX901_RailSlideProjectileInfo();
};

