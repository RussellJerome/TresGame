#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SQEX_BonamikComponentInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class USQEX_BonamikComponentInterface : public UInterface {
    GENERATED_BODY()
};

class ISQEX_BonamikComponentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SQEX_Bonamik_TurnOn(const TArray<FString>& Groups, float BlendTime) PURE_VIRTUAL(SQEX_Bonamik_TurnOn,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SQEX_Bonamik_SetPreRoll(int32 step, bool bApplyToChildren) PURE_VIRTUAL(SQEX_Bonamik_SetPreRoll,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SQEX_Bonamik_SetGroupWeight(const TArray<FString>& Groups, float Weight, float WeightChangeTime, bool ResetWhenNonZeroWeight, bool AutoDisable) PURE_VIRTUAL(SQEX_Bonamik_SetGroupWeight,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SQEX_Bonamik_Reset(bool bResetPose, bool bApplyToChildren) PURE_VIRTUAL(SQEX_Bonamik_Reset,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SQEX_Bonamik_IsSetup() PURE_VIRTUAL(SQEX_Bonamik_IsSetup, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual float SQEX_Bonamik_GetWeight() PURE_VIRTUAL(SQEX_Bonamik_GetWeight, return 0.0f;);
    
};

