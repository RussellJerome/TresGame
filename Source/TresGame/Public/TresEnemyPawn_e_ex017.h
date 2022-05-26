#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex017.generated.h"

class USQEX_ParticleAttachDataAsset;
class ATresProjectileBase;

UCLASS()
class ATresEnemyPawn_e_ex017 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectileBase* m_pMagicSquare;
    
    UPROPERTY()
    bool m_bMagicSquare;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* m_pro_EffDataAsset;
    
    ATresEnemyPawn_e_ex017();
    UFUNCTION(BlueprintCallable)
    bool IsMagicSquare();
    
    UFUNCTION(BlueprintCallable)
    void Debug_ForcingCancelMagicSquare();
    
};

