#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresPlayerJumpModes.h"
#include "ETresLandAnimPose.h"
#include "TresGimmickLauncher.generated.h"

class USceneComponent;
class UParticleSystemComponent;
class ATresCharPawnBase;
class AActor;
class UPrimitiveComponent;

UCLASS(Config=Game)
class ATresGimmickLauncher : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UParticleSystemComponent* SignEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_AttachName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_AnimLaunchName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_AnimIdleName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_AnimDamageName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_LaunchHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_DisableIdleAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETresLandAnimPose> m_LandAnimPose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_FlyingMotion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_LandAnimDelayTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxParticleScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DisableIK;
    
public:
    ATresGimmickLauncher();
    UFUNCTION(BlueprintCallable)
    void SetTickEnableBP(bool bTickEnableBP, int32 bit);
    
    UFUNCTION(BlueprintCallable)
    void SetLaunchHeight(float inHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpMode(TEnumAsByte<ETresPlayerJumpModes> eMode);
    
    UFUNCTION(BlueprintNativeEvent)
    void SetFadeParam(float Param);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableLauncher(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCancelLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetCancelComp(USceneComponent* pCancelComp);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimTickEnableBP(bool bTickEnableBP);
    
    UFUNCTION(BlueprintCallable)
    void RemovePawn(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintNativeEvent)
    void LuancherActorEndSetBase(AActor* inActor, UPrimitiveComponent* InComponent, const FName InBoneName);
    
    UFUNCTION(BlueprintNativeEvent)
    void LuancherActorEndLaunchAnim();
    
    UFUNCTION(BlueprintNativeEvent)
    void LuancherActorBeginSetBase(AActor* inActor, UPrimitiveComponent* InComponent, const FName InBoneName);
    
    UFUNCTION(BlueprintNativeEvent)
    void LuancherActorBeginLaunchAnim();
    
    UFUNCTION(BlueprintNativeEvent)
    void LauncherChangeGimmickAction(bool bShow);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LaunchedPawn(ATresCharPawnBase* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void EntryPawn(ATresCharPawnBase* pPawn, USceneComponent* pAttachComp, bool UseRemove);
    
    UFUNCTION(BlueprintCallable)
    void CancelLaunch();
    
    UFUNCTION(BlueprintCallable)
    void CallTakeDamageForLauncher();
    
};

