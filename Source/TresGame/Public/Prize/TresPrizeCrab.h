#pragma once
#include "CoreMinimal.h"
#include "TresPrize.h"
#include "TresPrizeCrab.generated.h"

class UTresStaticMeshComponent;

UCLASS(Abstract)
class ATresPrizeCrab : public ATresPrize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresStaticMeshComponent* MyMesh;
    
protected:
    UPROPERTY(EditAnywhere)
    float m_GetTime;
    
    UPROPERTY(EditAnywhere)
    float m_MinScaleOnGet;
    
    UPROPERTY(EditAnywhere)
    float m_GetRotSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_MaxGetRotSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_DrawDistance;
    
    UPROPERTY(EditAnywhere)
    float m_DrawDistanceInAttraction;
    
    UPROPERTY(EditAnywhere)
    float m_BeginDrawTime;
    
    UPROPERTY(EditAnywhere)
    float m_BounceDampingRate;
    
    UPROPERTY(EditAnywhere)
    int32 m_BounceMaxNum;
    
public:
    ATresPrizeCrab();
};

