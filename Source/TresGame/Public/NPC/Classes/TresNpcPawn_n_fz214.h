#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_fz214.generated.h"

class ATresAccompanyPawnBase;
class UCurveFloat;

UCLASS()
class ATresNpcPawn_n_fz214 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FRGiantSoldierBP;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_AppearCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_FinishCurveData;
    
    UPROPERTY(EditAnywhere)
    float m_fParabolaDamagePower;
    
    UPROPERTY(EditAnywhere)
    float m_fParabolaDamageAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fParabolaDamageBrake;
    
    UPROPERTY(EditAnywhere)
    float m_fParabolaDamageLimitBrake;
    
    ATresNpcPawn_n_fz214();
    UFUNCTION(BlueprintCallable)
    void BP_StopUserAI(bool Switch);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetArmorMorphWeight(float Value);
    
    UFUNCTION(BlueprintPure)
    bool BP_IsAnimEnd(FName InSlotName) const;
    
    UFUNCTION(BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetAnimOffsetAlpha() const;
    
};

