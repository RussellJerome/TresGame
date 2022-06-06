#pragma once
#include "CoreMinimal.h"
#include "ETresEnemySetAppearMode.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex014.generated.h"

class ATresEnemyPawn_e_ex012;

UCLASS()
class ATresEnemyPawn_e_ex014 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresEnemyPawn_e_ex012* m_CoopDummyPawn;
    
public:
    UPROPERTY(EditDefaultsOnly)
    FRotator m_pro_TanpopoOffsetRot;
    
    ATresEnemyPawn_e_ex014();
    UFUNCTION(BlueprintCallable)
    void SetDebugStateNo(int32 NO);
    
    UFUNCTION(BlueprintCallable)
    bool IsCooperation();
    
    UFUNCTION(BlueprintPure)
    FRotator GetTanpopoBoneRot() const;
    
    UFUNCTION(BlueprintPure)
    float GetTanpopoBoneAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetDebugStateNo();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetAppearState(TEnumAsByte<ETresEnemySetAppearMode> mode);
    
};

