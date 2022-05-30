#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipGimmickMeteorTable.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickMeteorTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_MeteoroHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pHoleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pGuideVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pMeteoroVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pMuzzleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pDeadVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fStartDispTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fEndDispTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_pMuzzleTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fStartTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fScaleTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fGlowTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fInitalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fEffectScale;
    
    TRESGAME_API FTresGumiShipGimmickMeteorTable();
};

