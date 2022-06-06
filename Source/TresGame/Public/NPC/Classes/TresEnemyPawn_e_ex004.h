#pragma once
#include "CoreMinimal.h"
#include "ETresEnemySetAppearMode.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex004.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS()
class ATresEnemyPawn_e_ex004 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool m_bWaterSummon;
    
    UPROPERTY()
    bool m_bExternalWaterSummon;
    
public:
    UPROPERTY(EditDefaultsOnly)
    float m_Appear2_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Appear2_MoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Appear2_StopSpeedTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Appear3_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Appear3_MoveDistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Appear3_MoveDistMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Appear3_StopSpeedTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Appear3_GravityRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ActionSteam_SteamTime;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    ATresEnemyPawn_e_ex004();
    UFUNCTION(BlueprintCallable)
    void SetDebugStateNo(int32 NO);
    
    UFUNCTION(BlueprintCallable)
    bool IsWaterSummon();
    
    UFUNCTION(BlueprintCallable)
    int32 GetWaterSummonNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetWarpCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDebugStateNo();
    
    UFUNCTION(BlueprintCallable)
    void ForcingCancelWaterSummon();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetAppearState(TEnumAsByte<ETresEnemySetAppearMode> mode);
    
};

