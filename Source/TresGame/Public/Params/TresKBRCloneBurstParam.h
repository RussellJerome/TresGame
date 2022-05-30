#pragma once
#include "CoreMinimal.h"
#include "KBRCloneBurstTypes_e_ex360.h"
#include "UObject/NoExportTypes.h"
#include "TresKBRCloneBurstParam.generated.h"

USTRUCT(BlueprintType)
struct FTresKBRCloneBurstParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_ShotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotDirYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShotDirPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ShadowMoveDirYaw;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<KBRCloneBurstTypes_e_ex360> m_AttackType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_IntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_ShotDist;
    
    TRESGAME_API FTresKBRCloneBurstParam();
};

