#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackDrawMaterialKey.h"
#include "TresInterpTrackDrawMaterial.generated.h"

UCLASS(CollapseCategories)
class TRESGAME_API UTresInterpTrackDrawMaterial : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FTresInterpTrackDrawMaterialKey> m_Keys;
    
    UTresInterpTrackDrawMaterial();
};

