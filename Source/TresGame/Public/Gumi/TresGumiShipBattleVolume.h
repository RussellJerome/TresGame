#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "UObject/NoExportTypes.h"
#include "ETresGumiShipBattleAreaState.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipBattleVolume.generated.h"

class UPrimitiveComponent;
class USphereComponent;
class ATresGumiShipEnemyGenerator;
class AActor;

UCLASS()
class ATresGumiShipBattleVolume : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyGroupWipeOutSignature, const FTresGumiShipEnemyGroupWipeOutData&, EnemyGroupWipeOutData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBattleVolumeCollisionSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAllEnemyGroupWipeOutSignature);
    
private:
    UPROPERTY(BlueprintAssignable)
    FBattleVolumeCollisionSignature _OnBattleAreaBeginOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FBattleVolumeCollisionSignature _OnBattleAreaEndOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FBattleVolumeCollisionSignature _OnEnemySpawnAreaBeginOverlap;
    
    UPROPERTY(BlueprintAssignable)
    FBattleVolumeCollisionSignature _OnEnemySpawnAreaEndOverlap;
    
public:
    UPROPERTY(BlueprintAssignable)
    FEnemyGroupWipeOutSignature OnEnemyGroupWipeOutInBattleArea;
    
    UPROPERTY(BlueprintAssignable)
    FAllEnemyGroupWipeOutSignature OnAllEnemyGroupWipeOutInBattleArea;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fEnemySpawnAreaRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fEnemyDisappearTriggerRadiusRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fNeedEnemyDisappearTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ATresGumiShipEnemyGenerator*> m_EnemyGeneratorList;
    
    UPROPERTY(Export)
    USphereComponent* m_pEnemySpawnAreaCollision;
    
    UPROPERTY(Export)
    USphereComponent* m_pBattleAreaCollision;
    
public:
    ATresGumiShipBattleVolume();
    UFUNCTION(BlueprintPure)
    bool IsAttachedMercunaNavVolume() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnemySpawnAreaRadius() const;
    
    UFUNCTION(BlueprintPure)
    ETresGumiShipBattleAreaState GetBattleAreaState() const;
    
    UFUNCTION(BlueprintPure)
    float GetBattleAreaRadius() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBattleAreaCenterPosition() const;
    
private:
    UFUNCTION()
    void _OnLeaveEnemySpawnArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void _OnLeaveBattleArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void _OnEnterEnemySpawnArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void _OnEnterBattleArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void _OnEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
};

