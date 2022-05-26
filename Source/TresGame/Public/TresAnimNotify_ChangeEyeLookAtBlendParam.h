#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ChangeFaceAnimBlendParamFunction -FallbackName=ESQEX_ChangeFaceAnimBlendParamFunction
#include "TresAnimNotify_ChangeEyeLookAtBlendParam.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UTresAnimNotify_ChangeEyeLookAtBlendParam : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_ParamEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_InterpTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESQEX_ChangeFaceAnimBlendParamFunction m_InterpFunc;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_InterpExp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 m_bSetInitParam: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_ParamStart;
    
public:
    UTresAnimNotify_ChangeEyeLookAtBlendParam();
};

