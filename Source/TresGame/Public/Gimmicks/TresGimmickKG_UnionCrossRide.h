#pragma once
#include "CoreMinimal.h"
#include "ETresCommandKind.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickSkeletalBase.h"
#include "EGimmickKG_UnionCrossAnim.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickKG_UnionCrossRide.generated.h"

class USoundBase;
class ATresCharPawnBase;
class ATresGimmickKG_UnionCrossEnemy;
class ATresEventPawnBase;
class ASQEX_SplineActor;

UCLASS(Config=Game)
class ATresGimmickKG_UnionCrossRide : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<USoundBase*> Sound_Attacks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* Sound_Damage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* Sound_TurnningToAttack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* Sound_Charge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ResoundWaitTime;
    
    ATresGimmickKG_UnionCrossRide();
    UFUNCTION(BlueprintCallable)
    void StartUnionCross(ATresCharPawnBase* pPawn, ATresEventPawnBase* pAttachPawn);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineSpeed(float fSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* splineActor);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerMoveSpeed(float AccelSpeed, float DumpingSpeed, float MaxSpeed, float BendingAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerMovableLength(float Length, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimType(TEnumAsByte<EGimmickKG_UnionCrossAnim> Type, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    int32 RandomTableKey();
    
    UFUNCTION(BlueprintCallable)
    void OpenHudUx();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSplineMoveArrival();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCommand(ETresCommandKind inCommand);
    
    UFUNCTION(BlueprintNativeEvent)
    void NotifyTimingFromPawn(int32 InParam);
    
    UFUNCTION(BlueprintPure)
    bool IsStateAnimEnd() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsEnableShield() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsDamaged() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeRamdomTable(int32 MaxNum);
    
    UFUNCTION(BlueprintNativeEvent)
    void HitShield(ATresGimmickKG_UnionCrossEnemy* Enemy);
    
    UFUNCTION(BlueprintNativeEvent)
    void HitEnemy(ATresGimmickKG_UnionCrossEnemy* Enemy);
    
    UFUNCTION(BlueprintNativeEvent)
    float GetShieldSize() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetPlayerSize() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FRotator GetPlayerRotator() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetPlayerCenter() const;
    
    UFUNCTION(BlueprintCallable)
    void EndUnionCross(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable)
    void CloseHudUx();
    
    UFUNCTION(BlueprintNativeEvent)
    bool BP_CanbeCommand(ETresCommandKind inCommand) const;
    
    UFUNCTION(BlueprintCallable)
    void AddFixedDamage(int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    bool AddActionCommandUnionX(TEnumAsByte<ETresCommandKind> tresCommandKind, const FString& commandName, int32 ID);
    
};

