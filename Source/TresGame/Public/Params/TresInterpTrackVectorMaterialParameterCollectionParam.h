#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackLinearColorBase.h"
#include "UObject/NoExportTypes.h"
#include "TresInterpTrackVectorMaterialParameterCollectionParam.generated.h"

class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackVectorMaterialParameterCollectionParam : public UInterpTrackLinearColorBase {
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
    FLinearColor m_DefaultValue;
    
    UPROPERTY(Transient)
    TArray<FLinearColor> m_InstanceBackupValues;
    
    UTresInterpTrackVectorMaterialParameterCollectionParam();
};

