#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "UObject/NoExportTypes.h"
#include "TresAnimNode_ModifyBoneCurveParam.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresAnimNode_ModifyBoneCurveParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference m_BoneToModify;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EBoneModificationMode> m_RotationMode;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* m_InterpRotationCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_InterpRotationOffset;
    
    FTresAnimNode_ModifyBoneCurveParam();
};

