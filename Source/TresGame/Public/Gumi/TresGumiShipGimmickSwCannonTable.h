#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipDropPrizeData.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipGimmickSwCannonTable.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickSwCannonTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_pSwDeadVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_vSwDeadOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSwDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTresGumiShipDropPrizeData m_SwItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fAnglespeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSwPcDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_CannonHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fLaserSavingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fTriggerReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fTriggerWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSwRespawnTime;
    
    TRESGAME_API FTresGumiShipGimmickSwCannonTable();
};

