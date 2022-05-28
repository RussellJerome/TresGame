#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_bx202.generated.h"

class ATresAccompanyPawnBase;
class USQEX_ParticleAttachDataAsset;

UCLASS()
class ATresNpcPawn_n_bx202 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FRBaymaxRideBP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_NpcEffectDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_AppendCure;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_fIntervalTime;
    
public:
    ATresNpcPawn_n_bx202();
    UFUNCTION(BlueprintPure)
    float GetRightArmAlpha() const;
    
    UFUNCTION(BlueprintPure)
    float GetAimOffsetAlpha() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetAimOffset() const;
    
};

