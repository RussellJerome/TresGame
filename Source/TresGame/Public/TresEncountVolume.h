#pragma once
#include "CoreMinimal.h"
#include "ETresEncountVolumeSnapTarget.h"
#include "TresVolume.h"
#include "ETresEncountVolumeVehicleMode.h"
#include "TresEncountVolumeStartSignatureDelegate.h"
#include "TresEncountVolumeStopSignatureDelegate.h"
#include "TresEncountVolumeEntry.h"
#include "Engine/EngineTypes.h"
#include "TresEncountVolume.generated.h"

class ATresBattleVolume;
class ATresEncountDisableVolume;
class ATresEncountSubEQSVolume;
class UDataTable;

UCLASS()
class ATresEncountVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresEncountVolumeVehicleMode m_VehicleMode;
    
    UPROPERTY(EditAnywhere)
    ETresEncountVolumeSnapTarget m_SnapTarget;
    
    UPROPERTY(EditAnywhere)
    TArray<UClass*> m_SupportVehicleClass;
    
    UPROPERTY(BlueprintAssignable)
    FTresEncountVolumeStartSignature m_OnStart;
    
    UPROPERTY(BlueprintAssignable)
    FTresEncountVolumeStopSignature m_OnStop;
    
    UPROPERTY(EditAnywhere)
    float m_MinMovement;
    
    UPROPERTY(EditAnywhere)
    float m_MaxMovement;
    
    UPROPERTY(EditAnywhere)
    float m_MinMovementAfterBattle;
    
    UPROPERTY(EditAnywhere)
    float m_ClampRateOfMovement;
    
    UPROPERTY(EditAnywhere)
    float m_ClampRateOfMinMovement;
    
    UPROPERTY(EditAnywhere)
    FName m_EventNameOnSpawn;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionResponse> m_CollResponse;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresEncountVolumeEntry> m_Entries;
    
    UPROPERTY(EditAnywhere)
    TArray<ATresEncountDisableVolume*> m_DisableVolumes;
    
    UPROPERTY(EditAnywhere)
    ATresBattleVolume* m_BattleOwner;
    
    UPROPERTY(EditAnywhere)
    ATresEncountSubEQSVolume* m_SubEQSVolume;
    
    UPROPERTY(Transient)
    ATresBattleVolume* m_SpawnedBattleOwner;
    
    UPROPERTY(EditAnywhere)
    UDataTable* m_RewardsTbl;
    
    ATresEncountVolume();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
};

