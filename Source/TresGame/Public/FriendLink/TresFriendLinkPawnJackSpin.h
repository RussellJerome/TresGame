#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresFriendLinkPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresFRJackSpinBombParam.h"
#include "Engine/EngineTypes.h"
#include "TresFriendLinkPawnJackSpin.generated.h"

class ATresCameraNormal;
class AActor;
class ATresProjectileBase;
class ATresCharPawnBase;
class UPrimitiveComponent;
class USphereComponent;
class USoundBase;

UCLASS()
class ATresFriendLinkPawnJackSpin : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ATresCameraNormal* m_Camera;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> m_pTargetPawn;
    
    UPROPERTY()
    TArray<ATresProjectileBase*> m_pBombs;
    
    UPROPERTY()
    ATresCharPawnBase* m_FinishAnimeProjectile;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_JackSpinProj;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresCharPawnBase> m_FinishProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BomeAtkProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresFRJackSpinBombParam> m_sBombParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetMaxLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetMinLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTargetYawRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CamTargetOfsZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CamDistanceNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CamDistanceLeftRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Param_CamTurningPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fYawSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fOffsetHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fBoundMinZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fBoundSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bAttackJumpMoveXY: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bAttackJumpMoveZ: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_MyRootCollOriginalSize;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_MyRootCollAtkSize;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_MyRootCollAtkFinishSize;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_MyRootCollFinishSize;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fyRootCollChangeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackFloatWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackMoveWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackMoveMinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackMoveMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackMoveReduceSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAttackMoveHoming;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAttackMoveZHoming;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GoalDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackFloatInitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackFloatSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackFloatTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fGravity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLastFloatWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLastAtkFloatInitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLastAtkFloatSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLastAtkFloatTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsAttackSpinControl;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackmotReduceSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackmotMinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackEndJumpMotTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackMoveDir;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* MySuctionWindComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WindForce;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NotWindRange;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    ATresFriendLinkPawnJackSpin();
    UFUNCTION()
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

