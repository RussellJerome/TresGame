#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresRemyActorBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresSharedFixedCameraParam.h"
#include "RemyCookingGameType.h"
#include "RemyGameState.h"
#include "TresRemyGameManager.generated.h"

class UCurveVector;
class UCurveFloat;
class ATresRemyCookingBase;
class ATresRemyPawnBase;
class USQEX_ParticleAttachDataAsset;
class ATresUIActor;
class ATresEventPawnBase;
class USQEXSEADMusic;
class ATresRemyPlayerController;
class AStaticMeshActor;
class UParticleSystemComponent;
class AActor;
class ATresRemyPawn;
class ATresRemyHUD;
class UTresRemyData;

UCLASS()
class ATresRemyGameManager : public ATresRemyActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresRemyCookingBase>> CookingGameRef;
    
    UPROPERTY(EditDefaultsOnly)
    int32 GameStartWaitFrames;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRemyPawnBase> HourglassPawnRef;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* HourglassSandParticleAttachDataRef;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* HourglassSandParticleCurveFloatRef;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* HourglassSandParticleCurveVectorARef;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveVector* HourglassSandParticleCurveVectorBRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresUIActor> MenuRemyActorRef;
    
    UPROPERTY(EditDefaultsOnly)
    FVector MenuRemyActorLocationRef;
    
    UPROPERTY(EditDefaultsOnly)
    FVector RemyRatLocationOffsetRef;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator RemyRatRotationOffsetRef;
    
    UPROPERTY(EditDefaultsOnly)
    FTresSharedFixedCameraParam FixedCameraInitialParamRef;
    
    UPROPERTY(EditDefaultsOnly)
    FTresSharedFixedCameraParam FixedCameraMenuStateParamRef;
    
    UPROPERTY(EditDefaultsOnly)
    float BlackBoxOpacityMax;
    
    UPROPERTY(EditDefaultsOnly)
    float BlackBoxDisappearanceSpeedRef;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> LevelNamesForSwitchKitchenGrade;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CookAmountMax;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresEventPawnBase> ScroogeEventPawn;
    
    UPROPERTY(EditDefaultsOnly)
    FName BGMSlotName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USQEXSEADMusic*> BGMRef;
    
    UPROPERTY(EditDefaultsOnly)
    float BGMFadeOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsDebugSkip;
    
private:
    UPROPERTY(Transient)
    FName m_selectedRecipeKey;
    
    UPROPERTY(Transient)
    int32 m_cookingTimes;
    
    UPROPERTY(Transient)
    ATresRemyCookingBase* m_pCurrentCooking;
    
    UPROPERTY(Transient)
    ATresEventPawnBase* m_pScroogeEventPawn;
    
    UPROPERTY(Transient)
    ATresUIActor* m_pMenuRemyActor;
    
public:
    ATresRemyGameManager();
    UFUNCTION(BlueprintCallable)
    void ShowGetMilestoneRewardUIMsg();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedRecipeKey(FName Key);
    
    UFUNCTION(BlueprintCallable)
    void SetBlackBox(AStaticMeshActor* blackBoxActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterStoveFireParicle(int32 KitchenGrade, UParticleSystemComponent* pParticle);
    
    UFUNCTION(BlueprintCallable)
    void RegisterHiddenActorInGame(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEventPawn(ATresEventPawnBase* pEventPawn);
    
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void ProcessWhenSkipMatinee();
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintPure)
    FName GetSelectedRecipeKey() const;
    
    UFUNCTION(BlueprintPure)
    RemyCookingGameType GetSelectedGameType() const;
    
    UFUNCTION(BlueprintPure)
    ATresRemyPawnBase* GetRemyRatPawn() const;
    
    UFUNCTION(BlueprintPure)
    ATresRemyPawn* GetPawn() const;
    
    UFUNCTION(BlueprintPure)
    ATresRemyHUD* GetHUD() const;
    
    UFUNCTION(BlueprintPure)
    UTresRemyData* GetData() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<RemyGameState> GetCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    ATresRemyCookingBase* GetCurrentCooking() const;
    
    UFUNCTION(BlueprintPure)
    ATresRemyPlayerController* GetController() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyGameState> State);
    
};

