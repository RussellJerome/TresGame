#pragma once
#include "CoreMinimal.h"
#include "TresGameCheatManager.h"
#include "TresGumiShipCheatManager.generated.h"

class UObject;
class UTresGumiShipCheatManager;

UCLASS()
class UTresGumiShipCheatManager : public UTresGameCheatManager {
    GENERATED_BODY()
public:
    UTresGumiShipCheatManager();
    UFUNCTION(Exec)
    void ToggleGumiShipEnemyStateNameVisibility();
    
    UFUNCTION(Exec)
    void ToggleGumiShipEnemyRespawnWaitStatusVisibility();
    
    UFUNCTION(Exec)
    void ToggleGumiShipEnemyBoundsSphereVisibility();
    
    UFUNCTION(Exec)
    void ToggleGumiShipEnemyAttackableCheckRaycastVisibility();
    
    UFUNCTION(Exec)
    void ShowDebugGumiShipLevelEntityActivateVolumeByTag(bool Visibility, FName TagName);
    
    UFUNCTION(Exec)
    void ShowDebugGumiShipLevelEntityActivateVolume(bool Visibility);
    
    UFUNCTION(Exec)
    void SetGumiShipEnemyMeshVisibility(FName EnemyID, bool Visibility);
    
    UFUNCTION(Exec)
    void SetGumiShipEnemyAttackableRangeVisibilityByName(FName EnemyID, FName AttackName, bool Visibility);
    
    UFUNCTION(Exec)
    void SetGumiShipEnemyAttackableRangeVisibility(FName EnemyID, bool Visibility);
    
    UFUNCTION(Exec)
    void SetGumiShipEnemyAttackableCheckRaycastDebugDrawTime(float DebugDrawSeconds);
    
    UFUNCTION(Exec)
    void SetGumiShipEnemyAttachEffectsVisibility(FName EnemyID, bool Visibility);
    
    UFUNCTION(Exec)
    void SetDebugGumiShipTriggerActorsVisibility(bool Visibility);
    
    UFUNCTION(Exec)
    void SendGumiShipEnemyDebugCommand(FName EnemyID, FName DebugCommandName);
    
    UFUNCTION(Exec)
    void GumiShipGimmick_Debug_HP_display();
    
    UFUNCTION(Exec)
    void GumiShipGimmick_Debug_ForcedTermination_TreasureSphere();
    
    UFUNCTION(Exec)
    void GumiShipGimmick_Debug_Cannon_Off();
    
    UFUNCTION(Exec)
    void GumiShip_Debug_SetGumiMissionProgressNum(int32 dIndex, int32 dParam);
    
    UFUNCTION(Exec)
    void GumiShip_Debug_ClearGumiMission(int32 dIndex);
    
    UFUNCTION(BlueprintPure)
    static UTresGumiShipCheatManager* Get(const UObject* WorldContext);
    
    UFUNCTION(Exec)
    void DebugTresInstanceActorsCollisionEnable(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugTreasureSphiaOpen(bool IsOpen);
    
    UFUNCTION(Exec)
    void DebugTravelPointOpen(bool IsOpen);
    
    UFUNCTION(Exec)
    void DebugSticker_SymbolFull();
    
    UFUNCTION(Exec)
    void DebugSticker_NumberFull();
    
    UFUNCTION(Exec)
    void DebugSticker_NatureFull();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM075();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM074();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM073();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM072();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM071();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM070();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM069();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM068();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM067();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM066();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM065();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM064();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM063();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM062();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM061();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM060();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM059();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM058();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM057();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM056();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM055();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM054();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM053();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM052();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM051();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM050();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM049();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM048();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM047();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM046();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM045();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM044();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM043();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM042();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM041();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM040();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM039();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM038();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM037();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM036();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM035();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM034();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM033();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM032();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM031();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM030();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM029();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM028();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM027();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM026();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM025();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM024();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM023();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM022();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM021();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM020();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM019();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM018();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM017();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM016();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM015();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM014();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM013();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM012();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM011();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM010();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM009();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM008();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM007();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM006();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM005();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM004();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM003();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM002();
    
    UFUNCTION(Exec)
    void DebugSticker_GUMISTICKER_ITEM001();
    
    UFUNCTION(Exec)
    void DebugSticker_EmblemFull();
    
    UFUNCTION(Exec)
    void DebugStaticMeshActorsCollisionEnable(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugSpecialWeaponFull();
    
    UFUNCTION(Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM060();
    
    UFUNCTION(Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM059();
    
    UFUNCTION(Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM058();
    
    UFUNCTION(Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM055();
    
    UFUNCTION(Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM053();
    
    UFUNCTION(Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM052();
    
    UFUNCTION(Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM049();
    
    UFUNCTION(Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM048();
    
    UFUNCTION(Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM047();
    
    UFUNCTION(Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM046();
    
    UFUNCTION(Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM045();
    
    UFUNCTION(Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM044();
    
    UFUNCTION(Exec)
    void DebugSpecialWeapon_GUMIETC_ITEM043();
    
    UFUNCTION(Exec)
    void DebugSpecialPlanFull();
    
    UFUNCTION(Exec)
    void DebugRecommendedPlanFull();
    
    UFUNCTION(Exec)
    void DebugPvShootingMode(bool IsEnable);
    
    UFUNCTION(Exec)
    void DebugPatternSymbolFull();
    
    UFUNCTION(Exec)
    void DebugPatternOrientalFull();
    
    UFUNCTION(Exec)
    void DebugPatternCutelFull();
    
    UFUNCTION(Exec)
    void DebugPatternBasicFull();
    
    UFUNCTION(Exec)
    void DebugPatternArtFull();
    
    UFUNCTION(Exec)
    void DebugPattern_No96();
    
    UFUNCTION(Exec)
    void DebugPattern_No95();
    
    UFUNCTION(Exec)
    void DebugPattern_No94();
    
    UFUNCTION(Exec)
    void DebugPattern_No93();
    
    UFUNCTION(Exec)
    void DebugPattern_No92();
    
    UFUNCTION(Exec)
    void DebugPattern_No91();
    
    UFUNCTION(Exec)
    void DebugPattern_No90();
    
    UFUNCTION(Exec)
    void DebugPattern_No9();
    
    UFUNCTION(Exec)
    void DebugPattern_No89();
    
    UFUNCTION(Exec)
    void DebugPattern_No88();
    
    UFUNCTION(Exec)
    void DebugPattern_No87();
    
    UFUNCTION(Exec)
    void DebugPattern_No86();
    
    UFUNCTION(Exec)
    void DebugPattern_No85();
    
    UFUNCTION(Exec)
    void DebugPattern_No84();
    
    UFUNCTION(Exec)
    void DebugPattern_No83();
    
    UFUNCTION(Exec)
    void DebugPattern_No82();
    
    UFUNCTION(Exec)
    void DebugPattern_No81();
    
    UFUNCTION(Exec)
    void DebugPattern_No80();
    
    UFUNCTION(Exec)
    void DebugPattern_No8();
    
    UFUNCTION(Exec)
    void DebugPattern_No79();
    
    UFUNCTION(Exec)
    void DebugPattern_No78();
    
    UFUNCTION(Exec)
    void DebugPattern_No77();
    
    UFUNCTION(Exec)
    void DebugPattern_No76();
    
    UFUNCTION(Exec)
    void DebugPattern_No75();
    
    UFUNCTION(Exec)
    void DebugPattern_No74();
    
    UFUNCTION(Exec)
    void DebugPattern_No73();
    
    UFUNCTION(Exec)
    void DebugPattern_No72();
    
    UFUNCTION(Exec)
    void DebugPattern_No71();
    
    UFUNCTION(Exec)
    void DebugPattern_No70();
    
    UFUNCTION(Exec)
    void DebugPattern_No7();
    
    UFUNCTION(Exec)
    void DebugPattern_No69();
    
    UFUNCTION(Exec)
    void DebugPattern_No68();
    
    UFUNCTION(Exec)
    void DebugPattern_No67();
    
    UFUNCTION(Exec)
    void DebugPattern_No66();
    
    UFUNCTION(Exec)
    void DebugPattern_No65();
    
    UFUNCTION(Exec)
    void DebugPattern_No64();
    
    UFUNCTION(Exec)
    void DebugPattern_No63();
    
    UFUNCTION(Exec)
    void DebugPattern_No62();
    
    UFUNCTION(Exec)
    void DebugPattern_No61();
    
    UFUNCTION(Exec)
    void DebugPattern_No60();
    
    UFUNCTION(Exec)
    void DebugPattern_No6();
    
    UFUNCTION(Exec)
    void DebugPattern_No59();
    
    UFUNCTION(Exec)
    void DebugPattern_No58();
    
    UFUNCTION(Exec)
    void DebugPattern_No57();
    
    UFUNCTION(Exec)
    void DebugPattern_No56();
    
    UFUNCTION(Exec)
    void DebugPattern_No55();
    
    UFUNCTION(Exec)
    void DebugPattern_No54();
    
    UFUNCTION(Exec)
    void DebugPattern_No53();
    
    UFUNCTION(Exec)
    void DebugPattern_No52();
    
    UFUNCTION(Exec)
    void DebugPattern_No51();
    
    UFUNCTION(Exec)
    void DebugPattern_No50();
    
    UFUNCTION(Exec)
    void DebugPattern_No5();
    
    UFUNCTION(Exec)
    void DebugPattern_No49();
    
    UFUNCTION(Exec)
    void DebugPattern_No48();
    
    UFUNCTION(Exec)
    void DebugPattern_No47();
    
    UFUNCTION(Exec)
    void DebugPattern_No46();
    
    UFUNCTION(Exec)
    void DebugPattern_No45();
    
    UFUNCTION(Exec)
    void DebugPattern_No44();
    
    UFUNCTION(Exec)
    void DebugPattern_No43();
    
    UFUNCTION(Exec)
    void DebugPattern_No42();
    
    UFUNCTION(Exec)
    void DebugPattern_No41();
    
    UFUNCTION(Exec)
    void DebugPattern_No40();
    
    UFUNCTION(Exec)
    void DebugPattern_No4();
    
    UFUNCTION(Exec)
    void DebugPattern_No39();
    
    UFUNCTION(Exec)
    void DebugPattern_No38();
    
    UFUNCTION(Exec)
    void DebugPattern_No37();
    
    UFUNCTION(Exec)
    void DebugPattern_No36();
    
    UFUNCTION(Exec)
    void DebugPattern_No35();
    
    UFUNCTION(Exec)
    void DebugPattern_No34();
    
    UFUNCTION(Exec)
    void DebugPattern_No33();
    
    UFUNCTION(Exec)
    void DebugPattern_No32();
    
    UFUNCTION(Exec)
    void DebugPattern_No31();
    
    UFUNCTION(Exec)
    void DebugPattern_No30();
    
    UFUNCTION(Exec)
    void DebugPattern_No3();
    
    UFUNCTION(Exec)
    void DebugPattern_No29();
    
    UFUNCTION(Exec)
    void DebugPattern_No28();
    
    UFUNCTION(Exec)
    void DebugPattern_No27();
    
    UFUNCTION(Exec)
    void DebugPattern_No26();
    
    UFUNCTION(Exec)
    void DebugPattern_No25();
    
    UFUNCTION(Exec)
    void DebugPattern_No24();
    
    UFUNCTION(Exec)
    void DebugPattern_No23();
    
    UFUNCTION(Exec)
    void DebugPattern_No22();
    
    UFUNCTION(Exec)
    void DebugPattern_No21();
    
    UFUNCTION(Exec)
    void DebugPattern_No20();
    
    UFUNCTION(Exec)
    void DebugPattern_No2();
    
    UFUNCTION(Exec)
    void DebugPattern_No19();
    
    UFUNCTION(Exec)
    void DebugPattern_No18();
    
    UFUNCTION(Exec)
    void DebugPattern_No17();
    
    UFUNCTION(Exec)
    void DebugPattern_No16();
    
    UFUNCTION(Exec)
    void DebugPattern_No15();
    
    UFUNCTION(Exec)
    void DebugPattern_No14();
    
    UFUNCTION(Exec)
    void DebugPattern_No13();
    
    UFUNCTION(Exec)
    void DebugPattern_No12();
    
    UFUNCTION(Exec)
    void DebugPattern_No11();
    
    UFUNCTION(Exec)
    void DebugPattern_No10();
    
    UFUNCTION(Exec)
    void DebugPattern_No1();
    
    UFUNCTION(Exec)
    void DebugPattern_No0();
    
    UFUNCTION(Exec)
    void DebugMaterialNature();
    
    UFUNCTION(Exec)
    void DebugMaterialHandcraft();
    
    UFUNCTION(Exec)
    void DebugMaterialEarth();
    
    UFUNCTION(Exec)
    void DebugMaterialBasicFull();
    
    UFUNCTION(Exec)
    void DebugMaterial_No9();
    
    UFUNCTION(Exec)
    void DebugMaterial_No8();
    
    UFUNCTION(Exec)
    void DebugMaterial_No7();
    
    UFUNCTION(Exec)
    void DebugMaterial_No6();
    
    UFUNCTION(Exec)
    void DebugMaterial_No57();
    
    UFUNCTION(Exec)
    void DebugMaterial_No56();
    
    UFUNCTION(Exec)
    void DebugMaterial_No55();
    
    UFUNCTION(Exec)
    void DebugMaterial_No54();
    
    UFUNCTION(Exec)
    void DebugMaterial_No53();
    
    UFUNCTION(Exec)
    void DebugMaterial_No52();
    
    UFUNCTION(Exec)
    void DebugMaterial_No51();
    
    UFUNCTION(Exec)
    void DebugMaterial_No50();
    
    UFUNCTION(Exec)
    void DebugMaterial_No5();
    
    UFUNCTION(Exec)
    void DebugMaterial_No49();
    
    UFUNCTION(Exec)
    void DebugMaterial_No48();
    
    UFUNCTION(Exec)
    void DebugMaterial_No47();
    
    UFUNCTION(Exec)
    void DebugMaterial_No46();
    
    UFUNCTION(Exec)
    void DebugMaterial_No45();
    
    UFUNCTION(Exec)
    void DebugMaterial_No44();
    
    UFUNCTION(Exec)
    void DebugMaterial_No43();
    
    UFUNCTION(Exec)
    void DebugMaterial_No42();
    
    UFUNCTION(Exec)
    void DebugMaterial_No41();
    
    UFUNCTION(Exec)
    void DebugMaterial_No40();
    
    UFUNCTION(Exec)
    void DebugMaterial_No4();
    
    UFUNCTION(Exec)
    void DebugMaterial_No39();
    
    UFUNCTION(Exec)
    void DebugMaterial_No38();
    
    UFUNCTION(Exec)
    void DebugMaterial_No37();
    
    UFUNCTION(Exec)
    void DebugMaterial_No36();
    
    UFUNCTION(Exec)
    void DebugMaterial_No35();
    
    UFUNCTION(Exec)
    void DebugMaterial_No34();
    
    UFUNCTION(Exec)
    void DebugMaterial_No33();
    
    UFUNCTION(Exec)
    void DebugMaterial_No32();
    
    UFUNCTION(Exec)
    void DebugMaterial_No31();
    
    UFUNCTION(Exec)
    void DebugMaterial_No30();
    
    UFUNCTION(Exec)
    void DebugMaterial_No3();
    
    UFUNCTION(Exec)
    void DebugMaterial_No29();
    
    UFUNCTION(Exec)
    void DebugMaterial_No28();
    
    UFUNCTION(Exec)
    void DebugMaterial_No27();
    
    UFUNCTION(Exec)
    void DebugMaterial_No26();
    
    UFUNCTION(Exec)
    void DebugMaterial_No25();
    
    UFUNCTION(Exec)
    void DebugMaterial_No24();
    
    UFUNCTION(Exec)
    void DebugMaterial_No23();
    
    UFUNCTION(Exec)
    void DebugMaterial_No22();
    
    UFUNCTION(Exec)
    void DebugMaterial_No21();
    
    UFUNCTION(Exec)
    void DebugMaterial_No20();
    
    UFUNCTION(Exec)
    void DebugMaterial_No2();
    
    UFUNCTION(Exec)
    void DebugMaterial_No19();
    
    UFUNCTION(Exec)
    void DebugMaterial_No18();
    
    UFUNCTION(Exec)
    void DebugMaterial_No17();
    
    UFUNCTION(Exec)
    void DebugMaterial_No16();
    
    UFUNCTION(Exec)
    void DebugMaterial_No15();
    
    UFUNCTION(Exec)
    void DebugMaterial_No14();
    
    UFUNCTION(Exec)
    void DebugMaterial_No13();
    
    UFUNCTION(Exec)
    void DebugMaterial_No12();
    
    UFUNCTION(Exec)
    void DebugMaterial_No11();
    
    UFUNCTION(Exec)
    void DebugMaterial_No10();
    
    UFUNCTION(Exec)
    void DebugMaterial_No1();
    
    UFUNCTION(Exec)
    void DebugMaterial_No0();
    
    UFUNCTION(Exec)
    void DebugJumpPointOpen(bool IsOpen);
    
    UFUNCTION(Exec)
    void DebugGummiShipCaptureEnable(bool IsEnable);
    
    UFUNCTION(Exec)
    void DebugGummiShipAngleZ(int32 inAngleZ);
    
    UFUNCTION(Exec)
    void DebugGummiShipAngleX(int32 inAngleX);
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM122();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM121();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM120();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM119();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM118();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM117();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM116();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM115();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM114();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM113();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM112();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM111();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM110();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM109();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM108();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM107();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM106();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM105();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM104();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM103();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM102();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM101();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM100();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM099();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM098();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM097();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM096();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM095();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM094();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM093();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM092();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM091();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM090();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM089();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM088();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM087();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM086();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM085();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM084();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM083();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM067();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM066();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM065();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM064();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM063();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM062();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM061();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM060();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM059();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM058();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM057();
    
    UFUNCTION(Exec)
    void DebugGummiPlan_ITEM056();
    
    UFUNCTION(Exec)
    void DebugGummiLvel(uint32 InLevel);
    
    UFUNCTION(Exec)
    void DebugGummiItemFull();
    
    UFUNCTION(Exec)
    void DebugGumiShipWorldGuideAllEnable(bool IsOn);
    
    UFUNCTION(Exec)
    void DebugGumiShipTutorialSkip();
    
    UFUNCTION(Exec)
    void DebugGumiShipToggleMergeMesh(bool flg);
    
    UFUNCTION(Exec)
    void DebugGumiShipSetRecordRank(int32 dIndex, int32 dParam);
    
    UFUNCTION(Exec)
    void DebugGumiShipSetRailCollisionDisable();
    
    UFUNCTION(Exec)
    void DebugGumiShipSetGimmickFlag(const uint32 udFlag, const bool bIn);
    
    UFUNCTION(Exec)
    void DebugGumiShipSetDrawDamageInfo(bool bIn);
    
    UFUNCTION(Exec)
    void DebugGumiShipSetBGCollisionEnable(bool bIn);
    
    UFUNCTION(Exec)
    void DebugGumiShipLevelEntityActivateVolumeEnable(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugGumiShipHudSuppression(bool IsOn);
    
    UFUNCTION(Exec)
    void DebugGumiShipEnemyTakeDamageZero(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugGumiShipEnemyPartsHitPointVisibility(bool bVisibility);
    
    UFUNCTION(Exec)
    void DebugGumiShipEnemyPartsDestroyOnDamage(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugGumiShipEnemyHPGaugeIgnore(bool IsOn);
    
    UFUNCTION(Exec)
    void DebugGumiShipEnemyHPGaugeEnable(bool IsOn);
    
    UFUNCTION(Exec)
    void DebugGumiShipEnemyHitPointVisibility(bool bVisibility);
    
    UFUNCTION(Exec)
    void DebugGumiShipEnemyBattleStartTriggerIgnore(bool bIgnoreFlag);
    
    UFUNCTION(Exec)
    void DebugGumiShipClusterActorsCollisionEnable(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugGumiShipBattleMissionSetTotalScore(uint32 udScore);
    
    UFUNCTION(Exec)
    void DebugGumiShipBattleMissionForceSearchRestart();
    
    UFUNCTION(Exec)
    void DebugGumiShipBattleMissionForceRetry();
    
    UFUNCTION(Exec)
    void DebugGumiShipBattleMissionForceQuit();
    
    UFUNCTION(Exec)
    void DebugGumiShipBattleMissionDrawInfo(bool bIn);
    
    UFUNCTION(Exec)
    void DebugGumiShipAllRecordRankA();
    
    UFUNCTION(Exec)
    void DebugGoWorldMap();
    
    UFUNCTION(Exec)
    void DebugGetTreasureMap();
    
    UFUNCTION(Exec)
    void DebugFullEquipAndMaxLevel();
    
    UFUNCTION(Exec)
    void DebugForceGumiShipEnemyRespawn();
    
    UFUNCTION(Exec)
    void DebugForceChangeSchwarzGeistBGM(int32 nChangeBgmMagicNumber);
    
    UFUNCTION(Exec)
    void DebugExpPrize(uint32 inPrize);
    
    UFUNCTION(Exec)
    void DebugEditGummiShipSkeletalMeshTickEnable(bool bEnable);
    
    UFUNCTION(Exec)
    void DebugArenaVisited(bool isVisit);
    
    UFUNCTION(Exec)
    void DebugAddWingGummi_index09();
    
    UFUNCTION(Exec)
    void DebugAddWingGummi_index08();
    
    UFUNCTION(Exec)
    void DebugAddWingGummi_index07();
    
    UFUNCTION(Exec)
    void DebugAddWingGummi_index06();
    
    UFUNCTION(Exec)
    void DebugAddWingGummi_index05();
    
    UFUNCTION(Exec)
    void DebugAddWingGummi_index04();
    
    UFUNCTION(Exec)
    void DebugAddWingGummi_index03();
    
    UFUNCTION(Exec)
    void DebugAddWingGummi_index02();
    
    UFUNCTION(Exec)
    void DebugAddWingGummi_index01();
    
    UFUNCTION(Exec)
    void DebugAddWingGummi_index00();
    
    UFUNCTION(Exec)
    void DebugAddWheelGummi_index02();
    
    UFUNCTION(Exec)
    void DebugAddWheelGummi_index01();
    
    UFUNCTION(Exec)
    void DebugAddWheelGummi_index00();
    
    UFUNCTION(Exec)
    void DebugAddStrikeGummi_index11();
    
    UFUNCTION(Exec)
    void DebugAddStrikeGummi_index10();
    
    UFUNCTION(Exec)
    void DebugAddStrikeGummi_index09();
    
    UFUNCTION(Exec)
    void DebugAddStrikeGummi_index08();
    
    UFUNCTION(Exec)
    void DebugAddStrikeGummi_index07();
    
    UFUNCTION(Exec)
    void DebugAddStrikeGummi_index06();
    
    UFUNCTION(Exec)
    void DebugAddStrikeGummi_index05();
    
    UFUNCTION(Exec)
    void DebugAddStrikeGummi_index04();
    
    UFUNCTION(Exec)
    void DebugAddStrikeGummi_index03();
    
    UFUNCTION(Exec)
    void DebugAddStrikeGummi_index02();
    
    UFUNCTION(Exec)
    void DebugAddStrikeGummi_index01();
    
    UFUNCTION(Exec)
    void DebugAddStrikeGummi_index00();
    
    UFUNCTION(Exec)
    void DebugAddShootingGummi_index17();
    
    UFUNCTION(Exec)
    void DebugAddShootingGummi_index16();
    
    UFUNCTION(Exec)
    void DebugAddShootingGummi_index11();
    
    UFUNCTION(Exec)
    void DebugAddShootingGummi_index10();
    
    UFUNCTION(Exec)
    void DebugAddShootingGummi_index09();
    
    UFUNCTION(Exec)
    void DebugAddShootingGummi_index08();
    
    UFUNCTION(Exec)
    void DebugAddShootingGummi_index07();
    
    UFUNCTION(Exec)
    void DebugAddShootingGummi_index06();
    
    UFUNCTION(Exec)
    void DebugAddShootingGummi_index05();
    
    UFUNCTION(Exec)
    void DebugAddShootingGummi_index04();
    
    UFUNCTION(Exec)
    void DebugAddShootingGummi_index03();
    
    UFUNCTION(Exec)
    void DebugAddShootingGummi_index02();
    
    UFUNCTION(Exec)
    void DebugAddShootingGummi_index01();
    
    UFUNCTION(Exec)
    void DebugAddShootingGummi_index00();
    
    UFUNCTION(Exec)
    void DebugAddShieldGummi_index03();
    
    UFUNCTION(Exec)
    void DebugAddShieldGummi_index02();
    
    UFUNCTION(Exec)
    void DebugAddShieldGummi_index01();
    
    UFUNCTION(Exec)
    void DebugAddShieldGummi_index00();
    
    UFUNCTION(Exec)
    void DebugAddPipeGummi_09();
    
    UFUNCTION(Exec)
    void DebugAddPipeGummi_08();
    
    UFUNCTION(Exec)
    void DebugAddPipeGummi_07();
    
    UFUNCTION(Exec)
    void DebugAddPipeGummi_06();
    
    UFUNCTION(Exec)
    void DebugAddPipeGummi_05();
    
    UFUNCTION(Exec)
    void DebugAddPipeGummi_04();
    
    UFUNCTION(Exec)
    void DebugAddPipeGummi_03();
    
    UFUNCTION(Exec)
    void DebugAddPipeGummi_02();
    
    UFUNCTION(Exec)
    void DebugAddPipeGummi_01();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index15();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index14();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index13();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index12();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index11();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index10();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index09();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index08();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index07();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index06();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index05();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index04();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index03();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index02();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index01();
    
    UFUNCTION(Exec)
    void DebugAddOptionGummi_index00();
    
    UFUNCTION(Exec)
    void DebugAddLaserGummi_index05();
    
    UFUNCTION(Exec)
    void DebugAddLaserGummi_index04();
    
    UFUNCTION(Exec)
    void DebugAddLaserGummi_index03();
    
    UFUNCTION(Exec)
    void DebugAddLaserGummi_index02();
    
    UFUNCTION(Exec)
    void DebugAddEngineGummi_index10();
    
    UFUNCTION(Exec)
    void DebugAddEngineGummi_index09();
    
    UFUNCTION(Exec)
    void DebugAddEngineGummi_index08();
    
    UFUNCTION(Exec)
    void DebugAddEngineGummi_index07();
    
    UFUNCTION(Exec)
    void DebugAddEngineGummi_index06();
    
    UFUNCTION(Exec)
    void DebugAddEngineGummi_index05();
    
    UFUNCTION(Exec)
    void DebugAddEngineGummi_index04();
    
    UFUNCTION(Exec)
    void DebugAddEngineGummi_index03();
    
    UFUNCTION(Exec)
    void DebugAddEngineGummi_index02();
    
    UFUNCTION(Exec)
    void DebugAddEngineGummi_index01();
    
    UFUNCTION(Exec)
    void DebugAddEngineGummi_index00();
    
    UFUNCTION(Exec)
    void DebugAddEdgeGummi_12();
    
    UFUNCTION(Exec)
    void DebugAddEdgeGummi_11();
    
    UFUNCTION(Exec)
    void DebugAddEdgeGummi_10();
    
    UFUNCTION(Exec)
    void DebugAddEdgeGummi_09();
    
    UFUNCTION(Exec)
    void DebugAddEdgeGummi_08();
    
    UFUNCTION(Exec)
    void DebugAddEdgeGummi_07();
    
    UFUNCTION(Exec)
    void DebugAddEdgeGummi_06();
    
    UFUNCTION(Exec)
    void DebugAddEdgeGummi_05();
    
    UFUNCTION(Exec)
    void DebugAddEdgeGummi_04();
    
    UFUNCTION(Exec)
    void DebugAddEdgeGummi_03();
    
    UFUNCTION(Exec)
    void DebugAddEdgeGummi_02();
    
    UFUNCTION(Exec)
    void DebugAddEdgeGummi_01();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_15();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_14();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_13();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_12();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_11();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_10();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_09();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_08();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_07();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_06();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_05();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_04();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_03();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_02();
    
    UFUNCTION(Exec)
    void DebugAddCurveGummi_01();
    
    UFUNCTION(Exec)
    void DebugAddCockpitGummi_index07();
    
    UFUNCTION(Exec)
    void DebugAddCockpitGummi_index06();
    
    UFUNCTION(Exec)
    void DebugAddCockpitGummi_index05();
    
    UFUNCTION(Exec)
    void DebugAddCockpitGummi_index04();
    
    UFUNCTION(Exec)
    void DebugAddCockpitGummi_index03();
    
    UFUNCTION(Exec)
    void DebugAddCockpitGummi_index02();
    
    UFUNCTION(Exec)
    void DebugAddCockpitGummi_index01();
    
    UFUNCTION(Exec)
    void DebugAddCockpitGummi_index00();
    
    UFUNCTION(Exec)
    void DebugAddCharacterGummi_index13();
    
    UFUNCTION(Exec)
    void DebugAddCharacterGummi_index12();
    
    UFUNCTION(Exec)
    void DebugAddCharacterGummi_index11();
    
    UFUNCTION(Exec)
    void DebugAddCharacterGummi_index10();
    
    UFUNCTION(Exec)
    void DebugAddCharacterGummi_index09();
    
    UFUNCTION(Exec)
    void DebugAddCharacterGummi_index08();
    
    UFUNCTION(Exec)
    void DebugAddCharacterGummi_index07();
    
    UFUNCTION(Exec)
    void DebugAddCharacterGummi_index06();
    
    UFUNCTION(Exec)
    void DebugAddCharacterGummi_index05();
    
    UFUNCTION(Exec)
    void DebugAddCharacterGummi_index04();
    
    UFUNCTION(Exec)
    void DebugAddCharacterGummi_index03();
    
    UFUNCTION(Exec)
    void DebugAddCharacterGummi_index02();
    
    UFUNCTION(Exec)
    void DebugAddCharacterGummi_index01();
    
    UFUNCTION(Exec)
    void DebugAddCharacterGummi_index00();
    
    UFUNCTION(Exec)
    void DebugAddAeroGummi_12();
    
    UFUNCTION(Exec)
    void DebugAddAeroGummi_11();
    
    UFUNCTION(Exec)
    void DebugAddAeroGummi_10();
    
    UFUNCTION(Exec)
    void DebugAddAeroGummi_09();
    
    UFUNCTION(Exec)
    void DebugAddAeroGummi_08();
    
    UFUNCTION(Exec)
    void DebugAddAeroGummi_07();
    
    UFUNCTION(Exec)
    void DebugAddAeroGummi_06();
    
    UFUNCTION(Exec)
    void DebugAddAeroGummi_05();
    
    UFUNCTION(Exec)
    void DebugAddAeroGummi_04();
    
    UFUNCTION(Exec)
    void DebugAddAeroGummi_03();
    
    UFUNCTION(Exec)
    void DebugAddAeroGummi_02();
    
    UFUNCTION(Exec)
    void DebugAddAeroGummi_01();
    
};

