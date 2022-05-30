#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex013.generated.h"

class USQEX_ParticleAttachDataAsset;
class UCurveFloat;
class ATresEnemyPawn_e_ex012;

UCLASS()
class TRESGAME_API ATresEnemyPawn_e_ex013 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool m_bFluff;
    
public:
    UPROPERTY(EditDefaultsOnly)
    float m_InvisibleTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InvisibleTime2;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PropellerRotMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_PropellerStCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_PropellerEndCurve;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_SporePossibleCount;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_pro_ChildHeadDefRot;
    
    UPROPERTY()
    ATresEnemyPawn_e_ex012* m_CoopDummyPawn;
    
public:
    ATresEnemyPawn_e_ex013();
    UFUNCTION(BlueprintCallable)
    void StartCooperationEvent();
    
    UFUNCTION(BlueprintCallable)
    bool IsSpore();
    
    UFUNCTION(BlueprintCallable)
    bool IsFluff();
    
    UFUNCTION(BlueprintCallable)
    bool IsCooperation();
    
    UFUNCTION(BlueprintPure)
    float GetPropellerRotRate() const;
    
    UFUNCTION(BlueprintPure)
    float GetPropellerRot() const;
    
    UFUNCTION(BlueprintPure)
    float GetPropellerKoshiRot() const;
    
};

