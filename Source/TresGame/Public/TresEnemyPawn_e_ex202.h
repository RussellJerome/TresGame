#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "ETresEnemyEx202ActionMode.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex202.generated.h"

class AActor;
class UTresAnimSet;
class UTresEnemyControlVolumeData_e_ex202;

UCLASS()
class ATresEnemyPawn_e_ex202 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    ETresEnemyEx202ActionMode m_AppearActionMode;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LockonCursorNameAtSnakeMode;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LockonCursorNameAtFlowerMode;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThresholdAngle;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumIdle;
    
    UPROPERTY(EditDefaultsOnly)
    UTresAnimSet* m_FlowerTossAnimSet;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTestTossDamage: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TestBlowHeightRate;
    
private:
    UPROPERTY(EditInstanceOnly)
    bool m_bAimOffset;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bTest;
    
    UPROPERTY(EditInstanceOnly)
    float m_Angle;
    
public:
    ATresEnemyPawn_e_ex202();
    UFUNCTION(BlueprintPure)
    bool IsSnakeMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInLinkActorRadius() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFlowerMode() const;
    
    UFUNCTION(BlueprintPure)
    UTresEnemyControlVolumeData_e_ex202* GetLinkActorData() const;
    
    UFUNCTION(BlueprintPure)
    float GetCoopAddMotionAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator GetAimOffsetValue();
    
    UFUNCTION(BlueprintPure)
    float GetAddMotionAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ToFlower();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBT(int32 Index);
    
    UFUNCTION(BlueprintPure)
    AActor* BP_DebugGetNearLinkActorEntry() const;
    
};

