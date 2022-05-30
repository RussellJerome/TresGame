#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackDrawMaterialKey.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FTresInterpTrackDrawMaterialKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_Material;
    
    UPROPERTY(EditAnywhere)
    FName m_ParameterName;
    
    UPROPERTY(EditAnywhere)
    float m_X;
    
    UPROPERTY(EditAnywhere)
    float m_Y;
    
    UPROPERTY(EditAnywhere)
    float m_W;
    
    UPROPERTY(EditAnywhere)
    float m_H;
    
    TRESGAME_API FTresInterpTrackDrawMaterialKey();
};

