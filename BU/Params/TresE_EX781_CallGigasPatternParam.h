#pragma once
#include "CoreMinimal.h"
#include "ColorTypes_e_ex781Gigas.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresE_EX781_CallGigasPatternParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_EX781_CallGigasPatternParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ColorTypes_e_ex781Gigas> m_GigasType;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_LandAfterAttack: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CraftWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_IsTargetPos: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_IsWarldPos: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_WarldPos;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetDist;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_TargetDir;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_Offset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MoveDir;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_PitchMoveDir;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ActionID;
    
    TRESGAME_API FTresE_EX781_CallGigasPatternParam();
};

