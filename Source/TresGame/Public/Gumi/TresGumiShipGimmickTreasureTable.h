#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipGimmickTreasureTable.generated.h"

class UParticleSystem;
class USoundBase;

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickTreasureTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pEmissionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pAcquisitionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pGearVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fTreasureDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fTreasureAngleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fGlowMashMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fGlowMashMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* m_SECoreLoopStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* m_SECoreLoopError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* m_SECoreLoopEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* m_SECoreColorChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* m_SEGearSuccess;
    
    TRESGAME_API FTresGumiShipGimmickTreasureTable();
};

