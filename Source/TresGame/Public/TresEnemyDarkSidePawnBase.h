#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "ETresEnemydw407ViewWay.h"
#include "TresEnemyDarkSidePawnBase_LockOnParam.h"
#include "TresEnemyDarkSidePawnBase.generated.h"

class ATresProjectileBase;

UCLASS()
class ATresEnemyDarkSidePawnBase : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresEnemyPawn_e_dw407b_EndLaserTiming);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresEnemyPawn_e_dw407b_EndBigRoarLaser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresEnemyPawn_e_dw407b_BeginBigRoarLaser);
    
    UPROPERTY(BlueprintAssignable)
    FTresEnemyPawn_e_dw407b_BeginBigRoarLaser OnEnemyDw407bBeginBigRoarLaser;
    
    UPROPERTY(BlueprintAssignable)
    FTresEnemyPawn_e_dw407b_EndBigRoarLaser OnEnemyDw407bEndBigRoarLaser;
    
    UPROPERTY(BlueprintAssignable)
    FTresEnemyPawn_e_dw407b_EndLaserTiming OnEnemyDw407bEndLaserTiming;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemydw407ViewWay> m_ViewWay;
    
    UPROPERTY(EditDefaultsOnly)
    FTresEnemyDarkSidePawnBase_LockOnParam m_LockOnViewTargetParams[3];
    
    UPROPERTY(EditDefaultsOnly)
    float m_ViewTargetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProdusedProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_TestAsset;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_SwitchingLockOnCursorPosHP;
    
    UPROPERTY()
    UClass* m_PreActionDefinitionClass;
    
public:
    ATresEnemyDarkSidePawnBase();
    UFUNCTION(BlueprintCallable)
    void BP_SpawnProjectile();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTest(const bool bIsTest);
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBT();
    
};

