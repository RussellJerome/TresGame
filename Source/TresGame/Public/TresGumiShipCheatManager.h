// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGameCheatManager.h"
#include "TresGumiShipCheatManager.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresGumiShipCheatManager : public UTresGameCheatManager
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void ToggleGumiShipEnemyStateNameVisibility() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void ToggleGumiShipEnemyRespawnWaitStatusVisibility() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void ToggleGumiShipEnemyBoundsSphereVisibility() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void ToggleGumiShipEnemyAttackableCheckRaycastVisibility() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void ShowDebugGumiShipLevelEntityActivateVolumeByTag(bool Visibility, const FName& TagName) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void ShowDebugGumiShipLevelEntityActivateVolume(bool Visibility) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void SetGumiShipEnemyMeshVisibility(const FName& EnemyID, bool Visibility) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void SetGumiShipEnemyAttackableRangeVisibilityByName(const FName& EnemyID, const FName& AttackName, bool Visibility) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void SetGumiShipEnemyAttackableRangeVisibility(const FName& EnemyID, bool Visibility) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void SetGumiShipEnemyAttackableCheckRaycastDebugDrawTime(float DebugDrawSeconds) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void SetGumiShipEnemyAttachEffectsVisibility(const FName& EnemyID, bool Visibility) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void SetDebugGumiShipTriggerActorsVisibility(bool Visibility) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void SendGumiShipEnemyDebugCommand(const FName& EnemyID, const FName& DebugCommandName) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void GumiShipGimmick_Debug_HP_display() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void GumiShipGimmick_Debug_ForcedTermination_TreasureSphere() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void GumiShipGimmick_Debug_Cannon_Off() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void GumiShip_Debug_SetGumiMissionProgressNum(int dIndex, int dParam) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void GumiShip_Debug_ClearGumiMission(int dIndex) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	static class UTresGumiShipCheatManager* Get(class UObject* WorldContext) { return nullptr; };
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugTresInstanceActorsCollisionEnable(bool bEnable) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugTreasureSphiaOpen(bool IsOpen) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugTravelPointOpen(bool IsOpen) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_SymbolFull() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_NumberFull() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_NatureFull() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM075() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM074() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM073() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM072() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM071() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM070() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM069() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM068() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM067() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM066() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM065() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM064() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM063() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM062() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM061() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM060() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM059() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM058() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM057() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM056() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM055() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM054() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM053() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM052() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM051() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM050() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM049() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM048() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM047() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM046() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM045() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM044() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM043() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM042() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM041() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM040() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM039() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM038() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM037() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM036() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM035() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM034() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM033() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM032() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM031() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM030() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM029() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM028() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM027() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM026() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM025() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM024() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM023() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM022() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM021() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM020() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM019() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM018() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM017() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM016() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM015() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM014() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM013() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM012() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM011() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM010() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM009() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM008() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM007() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM006() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM005() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM004() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM003() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM002() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_GUMISTICKER_ITEM001() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSticker_EmblemFull() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugStaticMeshActorsCollisionEnable(bool bEnable) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialWeaponFull() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialWeapon_GUMIETC_ITEM060() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialWeapon_GUMIETC_ITEM059() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialWeapon_GUMIETC_ITEM058() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialWeapon_GUMIETC_ITEM055() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialWeapon_GUMIETC_ITEM053() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialWeapon_GUMIETC_ITEM052() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialWeapon_GUMIETC_ITEM049() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialWeapon_GUMIETC_ITEM048() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialWeapon_GUMIETC_ITEM047() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialWeapon_GUMIETC_ITEM046() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialWeapon_GUMIETC_ITEM045() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialWeapon_GUMIETC_ITEM044() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialWeapon_GUMIETC_ITEM043() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugSpecialPlanFull() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugRecommendedPlanFull() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPvShootingMode(bool IsEnable) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPatternSymbolFull() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPatternOrientalFull() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPatternCutelFull() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPatternBasicFull() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPatternArtFull() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No96() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No95() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No94() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No93() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No92() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No91() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No90() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No9() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No89() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No88() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No87() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No86() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No85() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No84() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No83() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No82() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No81() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No80() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No8() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No79() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No78() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No77() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No76() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No75() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No74() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No73() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No72() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No71() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No70() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No7() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No69() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No68() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No67() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No66() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No65() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No64() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No63() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No62() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No61() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No60() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No6() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No59() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No58() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No57() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No56() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No55() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No54() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No53() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No52() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No51() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No50() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No5() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No49() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No48() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No47() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No46() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No45() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No44() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No43() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No42() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No41() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No40() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No4() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No39() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No38() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No37() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No36() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No35() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No34() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No33() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No32() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No31() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No30() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No3() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No29() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No28() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No27() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No26() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No25() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No24() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No23() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No22() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No21() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No20() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No2() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No19() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No18() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No17() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No16() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No15() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No14() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No13() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No12() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No11() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No10() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No1() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugPattern_No0() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterialNature() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterialHandcraft() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterialEarth() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterialBasicFull() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No9() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No8() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No7() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No6() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No57() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No56() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No55() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No54() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No53() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No52() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No51() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No50() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No5() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No49() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No48() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No47() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No46() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No45() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No44() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No43() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No42() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No41() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No40() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No4() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No39() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No38() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No37() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No36() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No35() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No34() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No33() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No32() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No31() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No30() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No3() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No29() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No28() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No27() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No26() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No25() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No24() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No23() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No22() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No21() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No20() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No2() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No19() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No18() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No17() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No16() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No15() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No14() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No13() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No12() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No11() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No10() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No1() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugMaterial_No0() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugJumpPointOpen(bool IsOpen) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiShipCaptureEnable(bool IsEnable) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiShipAngleZ(int inAngleZ) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiShipAngleX(int inAngleX) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM122() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM121() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM120() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM119() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM118() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM117() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM116() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM115() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM114() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM113() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM112() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM111() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM110() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM109() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM108() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM107() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM106() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM105() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM104() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM103() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM102() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM101() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM100() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM099() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM098() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM097() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM096() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM095() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM094() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM093() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM092() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM091() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM090() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM089() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM088() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM087() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM086() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM085() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM084() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM083() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM067() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM066() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM065() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM064() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM063() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM062() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM061() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM060() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM059() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM058() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM057() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiPlan_ITEM056() {};
	
	//NOT SUPPORTED BY BLUEPRINT
	void DebugGummiLvel(uint32 InLevel) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGummiItemFull() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipWorldGuideAllEnable(bool IsOn) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipTutorialSkip() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipToggleMergeMesh(bool flg) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipSetRecordRank(int dIndex, int dParam) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipSetRailCollisionDisable() {};
	
	//NOT SUPPORTED BY BLUEPRINT
	void DebugGumiShipSetGimmickFlag(uint32 udFlag, bool bIn) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipSetDrawDamageInfo(bool bIn) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipSetBGCollisionEnable(bool bIn) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipLevelEntityActivateVolumeEnable(bool bEnable) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipHudSuppression(bool IsOn) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipEnemyTakeDamageZero(bool bEnable) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipEnemyPartsHitPointVisibility(bool bVisibility) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipEnemyPartsDestroyOnDamage(bool bEnable) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipEnemyHPGaugeIgnore(bool IsOn) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipEnemyHPGaugeEnable(bool IsOn) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipEnemyHitPointVisibility(bool bVisibility) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipEnemyBattleStartTriggerIgnore(bool bIgnoreFlag) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipClusterActorsCollisionEnable(bool bEnable) {};
	
	//NOT SUPPORTED BY BLUEPRINT
	void DebugGumiShipBattleMissionSetTotalScore(uint32 udScore) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipBattleMissionForceSearchRestart() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipBattleMissionForceRetry() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipBattleMissionForceQuit() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipBattleMissionDrawInfo(bool bIn) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGumiShipAllRecordRankA() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGoWorldMap() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugGetTreasureMap() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugFullEquipAndMaxLevel() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugForceGumiShipEnemyRespawn() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugForceChangeSchwarzGeistBGM(int nChangeBgmMagicNumber) {};
	
	//NOT SUPPORTED BY BLUEPRINT
	void DebugExpPrize(uint32 inPrize) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugEditGummiShipSkeletalMeshTickEnable(bool bEnable) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugArenaVisited(bool isVisit) {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddWingGummi_index09() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddWingGummi_index08() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddWingGummi_index07() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddWingGummi_index06() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddWingGummi_index05() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddWingGummi_index04() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddWingGummi_index03() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddWingGummi_index02() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddWingGummi_index01() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddWingGummi_index00() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddWheelGummi_index02() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddWheelGummi_index01() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddWheelGummi_index00() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddStrikeGummi_index11() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddStrikeGummi_index10() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddStrikeGummi_index09() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddStrikeGummi_index08() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddStrikeGummi_index07() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddStrikeGummi_index06() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddStrikeGummi_index05() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddStrikeGummi_index04() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddStrikeGummi_index03() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddStrikeGummi_index02() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddStrikeGummi_index01() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddStrikeGummi_index00() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShootingGummi_index17() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShootingGummi_index16() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShootingGummi_index11() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShootingGummi_index10() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShootingGummi_index09() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShootingGummi_index08() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShootingGummi_index07() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShootingGummi_index06() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShootingGummi_index05() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShootingGummi_index04() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShootingGummi_index03() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShootingGummi_index02() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShootingGummi_index01() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShootingGummi_index00() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShieldGummi_index03() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShieldGummi_index02() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShieldGummi_index01() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddShieldGummi_index00() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddPipeGummi_09() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddPipeGummi_08() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddPipeGummi_07() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddPipeGummi_06() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddPipeGummi_05() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddPipeGummi_04() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddPipeGummi_03() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddPipeGummi_02() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddPipeGummi_01() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index15() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index14() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index13() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index12() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index11() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index10() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index09() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index08() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index07() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index06() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index05() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index04() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index03() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index02() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index01() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddOptionGummi_index00() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddLaserGummi_index05() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddLaserGummi_index04() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddLaserGummi_index03() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddLaserGummi_index02() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEngineGummi_index10() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEngineGummi_index09() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEngineGummi_index08() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEngineGummi_index07() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEngineGummi_index06() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEngineGummi_index05() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEngineGummi_index04() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEngineGummi_index03() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEngineGummi_index02() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEngineGummi_index01() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEngineGummi_index00() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEdgeGummi_13() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEdgeGummi_12() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEdgeGummi_11() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEdgeGummi_09() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEdgeGummi_08() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEdgeGummi_07() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEdgeGummi_06() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEdgeGummi_05() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEdgeGummi_04() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEdgeGummi_03() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEdgeGummi_02() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddEdgeGummi_01() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_16() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_15() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_14() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_13() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_12() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_11() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_09() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_08() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_07() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_06() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_05() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_04() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_03() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_02() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCurveGummi_01() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCockpitGummi_index07() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCockpitGummi_index06() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCockpitGummi_index05() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCockpitGummi_index04() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCockpitGummi_index03() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCockpitGummi_index02() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCockpitGummi_index01() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCockpitGummi_index00() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCharacterGummi_index13() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCharacterGummi_index12() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCharacterGummi_index11() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCharacterGummi_index10() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCharacterGummi_index09() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCharacterGummi_index08() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCharacterGummi_index07() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCharacterGummi_index06() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCharacterGummi_index05() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCharacterGummi_index04() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCharacterGummi_index03() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCharacterGummi_index02() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCharacterGummi_index01() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddCharacterGummi_index00() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddAeroGummi_13() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddAeroGummi_12() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddAeroGummi_11() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddAeroGummi_09() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddAeroGummi_08() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddAeroGummi_07() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddAeroGummi_06() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddAeroGummi_05() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddAeroGummi_04() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddAeroGummi_03() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddAeroGummi_02() {};
	
	UFUNCTION(BlueprintCallable, Category = "TresGumiShipCheatManager")
	void DebugAddAeroGummi_01() {};
};
