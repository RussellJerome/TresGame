#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESqEX_BonePoseToMaterialSetParamType -FallbackName=ESqEX_BonePoseToMaterialSetParamType
#include "TresAnimNode_ModifyBoneCurveParam.h"
#include "UObject/NoExportTypes.h"
#include "TresChangeMeshMaterialParamData.generated.h"

USTRUCT(BlueprintType)
struct FTresChangeMeshMaterialParamData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_MaterialParamName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_MaterialInstanceList;
    
    UPROPERTY(EditDefaultsOnly)
    ESqEX_BonePoseToMaterialSetParamType m_MaterialParamSetType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartScalarParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndScalarParam;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_StartVectorParam;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_EndVectorParam;
    
    TRESGAME_API FTresChangeMeshMaterialParamData();
};

