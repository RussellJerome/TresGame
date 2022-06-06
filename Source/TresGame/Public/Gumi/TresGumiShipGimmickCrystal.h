#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipGumiCrystalID.h"
#include "ETresGumiShipSpecialCrystalID.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "TresGumiShipDropPrizeData.h"
#include "TresGumiShipGimmickCrystal.generated.h"

class UDataTable;

UCLASS()
class ATresGumiShipGimmickCrystal : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float m_NowHitPoint;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_MaxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_MaxHitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_MidHitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_MinHitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTresGumiShipDropPrizeData> m_BeginDropPrizeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_MaxCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* m_LotteryDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresGumiShipSpecialCrystalID m_WorldMapSpecialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETresGumiShipGumiCrystalID m_WorldMapGumiID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fRecoveryPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_DataTableName;
    
public:
    ATresGumiShipGimmickCrystal();
protected:
    UFUNCTION(BlueprintCallable)
    void _SetUpCrystal(int32 Min, int32 Max, bool spawn);
    
    UFUNCTION(BlueprintCallable)
    float _GetRecoveryPoint();
    
    UFUNCTION(BlueprintCallable)
    float _GetRecoveryInversePoint();
    
    UFUNCTION()
    void _CheckTreasureMap();
    
};

