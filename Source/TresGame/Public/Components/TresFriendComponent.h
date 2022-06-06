#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "TresAnimInterface.h"
#include "UObject/NoExportTypes.h"
#include "TresNotifyInterface.h"
#include "ETresFriendAreaID.h"
#include "ETresChrUniqueID.h"
#include "ETresCommandKind.h"
#include "TresFriendComponent.generated.h"

class AActor;
class ATresNpcPawnBase;
class AController;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresFriendComponent : public UActorComponent, public ITresAnimInterface, public ITresNotifyInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AController* m_pController;
    
    UPROPERTY()
    TWeakObjectPtr<ATresNpcPawnBase> m_pFriendPawn[6];
    
    UPROPERTY()
    TWeakObjectPtr<AActor> m_pCameraTargetActor;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresNpcPawnBase> m_FriendPawnBPDefault[6];
    
    UPROPERTY(Transient)
    TSubclassOf<ATresNpcPawnBase> m_FriendPawnBP[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDispDebugInfo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bDispDebugLine: 1;
    
    UTresFriendComponent();
    UFUNCTION(BlueprintCallable)
    bool SetFriendByIDName(FName inNpcName);
    
    UFUNCTION(BlueprintCallable)
    void SetFriendAreaID(ETresFriendAreaID inAreaID);
    
    UFUNCTION(BlueprintCallable)
    void SetFriendAll(FName inNpcName0, FName inNpcName1, FName inNpcName2, FName inNpcName3, FName inGuestName4, FName inGuestName5, bool bSetFriendClass);
    
    UFUNCTION(BlueprintCallable)
    bool SetFriend(int32 inIdx, FName inNpcName);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableFriendWarpHome(bool DisableON);
    
    UFUNCTION(BlueprintCallable)
    void SetCinematicStateAllFNPC();
    
    UFUNCTION(BlueprintCallable)
    void SetBodyPaintFriendAll(float InScalar);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyPaintFriend(ETresChrUniqueID uid, float InScalar);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyImmovableFriendAll(bool InOnOff);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyImmovableFriend(ETresChrUniqueID uid, bool InOnOff);
    
    UFUNCTION(BlueprintCallable)
    void SetAllFriendLinkPointDisable(bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoiceFriendLink(TEnumAsByte<ETresCommandKind> Command, ETresChrUniqueID uid);
    
    UFUNCTION(BlueprintPure)
    bool IsExistGoofy() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExistDonald() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExistDonaGoo() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExistChar(ETresChrUniqueID uid) const;
    
    UFUNCTION(BlueprintPure)
    bool IsExeLink() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDisableFriendWarpHome();
    
    UFUNCTION(BlueprintPure)
    bool IsCameraTargetActorEnable();
    
    UFUNCTION(BlueprintPure)
    bool IsCameraShortAnime();
    
    UFUNCTION(BlueprintCallable)
    FVector GetHomePos(ATresNpcPawnBase* pNpcPawn);
    
    UFUNCTION(BlueprintPure)
    AActor* GetCameraTargetActor();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteFriendByUniqueID(ETresChrUniqueID uid);
    
    UFUNCTION(BlueprintCallable)
    void DeleteFriendAll();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteFriend(int32 inIdx);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllCmd(bool FriendLink, bool AttractionFlow);
    
    UFUNCTION(BlueprintCallable)
    void ClearStateAllFNPC(bool InCinematicClear);
    
    UFUNCTION(BlueprintCallable)
    void CheckDisableFriendLinkCmd();
    
    UFUNCTION(BlueprintCallable)
    ATresNpcPawnBase* BP_GetFriendPawnByUniqueID(ETresChrUniqueID uid);
    
    UFUNCTION(BlueprintCallable)
    void AnimStopFriend(bool InEnableGuest);
    
    UFUNCTION(BlueprintCallable)
    void AnimPlayFriend(FName InAnimName, bool InLoop, bool InEnableGuest);
    
    
    // Fix for true pure virtual functions not being implemented
};

