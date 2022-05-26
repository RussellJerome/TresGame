#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_dw003.generated.h"

class ATresAccompanyPawnBase;
class UParticleSystem;

UCLASS()
class ATresNpcPawn_n_dw003 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffDevilWave;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_PawnID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_AppendCure;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FR_PopppingHolyPawnClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAccompanyPawnBase> m_FR_UltimateEndPawnClass;
    
private:
    UPROPERTY()
    bool m_IsAquaLinkMode;
    
    UPROPERTY()
    float m_AquaLinkTimer;
    
public:
    ATresNpcPawn_n_dw003();
    UFUNCTION()
    bool IsDevilWaveSlowMove() const;
    
    UFUNCTION()
    bool IsDevilWaveCycloneMode() const;
    
    UFUNCTION()
    bool IsDevilWaveCoreOpen() const;
    
    UFUNCTION()
    bool IsDevilEyeColorRed() const;
    
    UFUNCTION()
    bool IsAITargetDevilWave() const;
    
    UFUNCTION()
    bool IsAITargetDevilTower() const;
    
    UFUNCTION()
    bool IsAITargetDarkSide() const;
    
};

