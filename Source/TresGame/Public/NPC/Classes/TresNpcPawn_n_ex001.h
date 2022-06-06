#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcPawn_n_ex001.generated.h"

class ATresEnemyPawn_e_fz903;
class ATresAccompanyPawnBase;

UCLASS()
class ATresNpcPawn_n_ex001 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_PawnID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MarshmallowRange2D;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_vMarshmallowLeadPos;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FRCallMeteorBP;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FRFlareForceBP;
    
    UPROPERTY()
    ATresEnemyPawn_e_fz903* m_pMarshmallowPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_AppendCure;
    
    UPROPERTY()
    bool m_IsLinkMode;
    
    ATresNpcPawn_n_ex001();
    UFUNCTION(BlueprintCallable)
    bool IsRideOn();
    
};

