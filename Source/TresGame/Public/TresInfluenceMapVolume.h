#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "TresInfluenceMapLayer.h"
#include "TresInfluenceMapVolume.generated.h"

UCLASS()
class ATresInfluenceMapVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_CellSize;
    
    UPROPERTY(EditAnywhere)
    FTresInfluenceMapLayer m_LayerArray[8];
    
    UPROPERTY(EditAnywhere)
    bool m_bUseNavmesh;
    
    UPROPERTY()
    TArray<uint32> m_Connections;
    
    UPROPERTY()
    TArray<int32> m_ValidIndices;
    
public:
    ATresInfluenceMapVolume();
};

