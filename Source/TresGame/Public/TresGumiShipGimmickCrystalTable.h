#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipGimmickCrystalTable.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickCrystalTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fRecoveryPointRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fRotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pBrokenVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bRevival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fRevivalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fScaleMid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fScaleMin;
    
    TRESGAME_API FTresGumiShipGimmickCrystalTable();
};

