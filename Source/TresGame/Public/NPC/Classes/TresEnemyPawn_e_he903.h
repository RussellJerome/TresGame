#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawnBase_e_he90x.h"
#include "DebrisStatePatternSet_e_he903.h"
#include "TresEnemyPawn_e_he903.generated.h"

class UTresDebrisComponent_e_he903;
class UTresSplineManager_e_he903;
class UPrimitiveComponent;
class UTresLockonTargetComponent;
class AActor;
class ATresBlowAttachActor_e_he903;

UCLASS()
class ATresEnemyPawn_e_he903 : public ATresEnemyPawnBase_e_he90x {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresDebrisComponent_e_he903* m_DebrisComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_IceActorBBKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LavaActorBBKeyName;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresSplineManager_e_he903* m_SplineManager;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UPrimitiveComponent* m_WaterCurrentCollision;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    AActor* m_Actor_L_ude;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    AActor* m_Actor_R_ude;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UTresLockonTargetComponent* m_LockonComp_Land;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UTresLockonTargetComponent* m_LockonComp_Air;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRotRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fExtendStopTimeAfterAthleticFlow;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMountCameraChangeWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vTractionEndLoc;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bFirstBattlePawn;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bCanGenerateDebris;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDebrisEvadeSmoothRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDebrisEvadeRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDebrisTitanEvadeSmoothRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDebrisTitanEvadeRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDispDebrisEvade;
    
    UPROPERTY(EditDefaultsOnly)
    FDebrisStatePatternSet_e_he903 m_DebrisStatePatternSet;
    
protected:
    UPROPERTY()
    AActor* m_LookAtTarget;
    
    UPROPERTY()
    ATresBlowAttachActor_e_he903* m_BlowAttachActor;
    
    UPROPERTY()
    TArray<AActor*> m_DebrisActorArray;
    
public:
    ATresEnemyPawn_e_he903();
    UFUNCTION(BlueprintPure)
    bool IsPlayerFloatingMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsNowBigTornado();
    
    UFUNCTION(BlueprintPure)
    bool IsFloatingTimeOver();
    
};

