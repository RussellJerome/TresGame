// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresGame.h"
#include "TresFriendComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRESGAME_API UTresFriendComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFriendComponent")
	class AController* m_pController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFriendComponent")
	TWeakObjectPtr<class ATresNpcPawnBase> m_pFriendPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFriendComponent")
	TWeakObjectPtr<class AActor> m_pCameraTargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFriendComponent")
	class UClass* m_FriendPawnBPDefault;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFriendComponent")
	class UClass* m_FriendPawnBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFriendComponent")
	bool m_bDispDebugInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFriendComponent")
	bool m_bDispDebugLine;

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	bool SetFriendByIDName(const FName& inNpcName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void SetFriendAreaID(TEnumAsByte<ETresFriendAreaID> inAreaID) {};

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void SetFriendAll(const FName& inNpcName0, const FName& inNpcName1, const FName& inNpcName2, const FName& inNpcName3, const FName& inGuestName4, const FName& inGuestName5, bool bSetFriendClass) {};

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	bool SetFriend(int inIdx, const FName& inNpcName) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void SetDisableFriendWarpHome(bool DisableON) {};

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void SetCinematicStateAllFNPC() {};

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void SetBodyPaintFriendAll(float InScalar) {};

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void SetBodyPaintFriend(TEnumAsByte<ETresChrUniqueID> uid, float InScalar) {};

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void SetBodyImmovableFriendAll(bool InOnOff) {};

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void SetBodyImmovableFriend(TEnumAsByte<ETresChrUniqueID> uid, bool InOnOff) {};

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void SetAllFriendLinkPointDisable(bool Disable) {};

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void PlayVoiceFriendLink(TEnumAsByte<ETresCommandKind> Command, TEnumAsByte<ETresChrUniqueID> uid) {};

	UFUNCTION(BlueprintPure, Category = "TresFriendComponent")
	bool IsExistGoofy() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresFriendComponent")
	bool IsExistDonald() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresFriendComponent")
	bool IsExistDonaGoo() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresFriendComponent")
	bool IsExistChar(TEnumAsByte<ETresChrUniqueID> uid) { return false; };

	UFUNCTION(BlueprintPure, Category = "TresFriendComponent")
	bool IsExeLink() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresFriendComponent")
	bool IsDisableFriendWarpHome() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresFriendComponent")
	bool IsCameraTargetActorEnable() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresFriendComponent")
	bool IsCameraShortAnime() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresFriendComponent")
	FVector GetHomePos(class ATresNpcPawnBase* pNpcPawn) { return FVector::FVector(); };

	UFUNCTION(BlueprintPure, Category = "TresFriendComponent")
	class AActor* GetCameraTargetActor() { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	bool DeleteFriendByUniqueID(TEnumAsByte<ETresChrUniqueID> uid) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void DeleteFriendAll() {};

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	bool DeleteFriend(int inIdx) { return false; };

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void DeleteAllCmd(bool FriendLink, bool AttractionFlow) {};

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void ClearStateAllFNPC(bool InCinematicClear) {};

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void CheckDisableFriendLinkCmd() {};

	UFUNCTION(BlueprintPure, Category = "TresFriendComponent")
	class ATresNpcPawnBase* BP_GetFriendPawnByUniqueID(TEnumAsByte<ETresChrUniqueID> uid) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void AnimStopFriend(bool InEnableGuest) {};

	UFUNCTION(BlueprintCallable, Category = "TresFriendComponent")
	void AnimPlayFriend(const FName& InAnimName, bool InLoop, bool InEnableGuest) {};
};
