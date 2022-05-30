#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackFloatMaterialParameterCollectionParam.generated.h"

class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackFloatMaterialParameterCollectionParam : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialParameterCollection* m_Collection;
    
    UPROPERTY(EditAnywhere)
    FName m_ParameterName;
    
    UPROPERTY(EditAnywhere)
    bool m_RestoreWhenTerminated;
    
    UPROPERTY(Transient)
    TArray<UMaterialParameterCollectionInstance*> m_CollectionInstances;
    
    UPROPERTY(Transient)
    float m_DefaultValue;
    
    UPROPERTY(Transient)
    TArray<float> m_InstanceBackupValues;
    
    UTresInterpTrackFloatMaterialParameterCollectionParam();
};

