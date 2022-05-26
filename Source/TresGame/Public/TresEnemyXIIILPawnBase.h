#pragma once
#include "CoreMinimal.h"
#include "ETresStateID.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyXIIILPawnBase.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(Abstract)
class ATresEnemyXIIILPawnBase : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_UniqueEffectDataAsset;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableRevengeChain: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_RevengeChainBaseDataTableIDNameList;
    
    ATresEnemyXIIILPawnBase();
private:
    UFUNCTION()
    void OnDtorStateEvent_XIIIL(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    void OnCtorStateEvent(TEnumAsByte<ETresStateID> inStateID);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayerStyleFinish() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerShootLock() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerDisneyMagic() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerAttractionFlow() const;
    
    UFUNCTION()
    bool IsEnableRevengeChain() const;
    
    UFUNCTION()
    int32 GetRevengeChainNum() const;
    
    UFUNCTION(BlueprintPure)
    float GetElapsedTimeSinceLastWaterCommand() const;
    
    UFUNCTION(BlueprintPure)
    float GetElapsedTimeSinceLastThunderCommand() const;
    
    UFUNCTION(BlueprintPure)
    float GetElapsedTimeSinceLastFireCommand() const;
    
    UFUNCTION(BlueprintPure)
    float GetElapsedTimeSinceLastCureCommand() const;
    
    UFUNCTION(BlueprintPure)
    float GetElapsedTimeSinceLastBlizzardCommand() const;
    
    UFUNCTION(BlueprintPure)
    float GetElapsedTimeSinceLastAttackMagicCommand() const;
    
    UFUNCTION(BlueprintPure)
    float GetElapsedTimeSinceLastAeroCommand() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCenterLocation() const;
    
};

