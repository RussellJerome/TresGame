#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresRemyCookingBase.h"
#include "RemyCookingGameState.h"
#include "TresRemyCookingFlambeV2.generated.h"

class ATresRemyPawnBase;
class USQEX_ParticleAttachDataAsset;

UCLASS()
class ATresRemyCookingFlambeV2 : public ATresRemyCookingBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRemyPawnBase> PanPawnRef;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresRemyPawnBase> BottlePawnRef;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ATresRemyPawnBase>> FoodPawnRef;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* BrandyParticleAttachDataRef;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* FireParticleAttachDataRef;
    
    UPROPERTY(EditDefaultsOnly)
    USQEX_ParticleAttachDataAsset* VaporParticleAttachDataRef;
    
private:
    UPROPERTY(Transient)
    ATresRemyPawnBase* m_pPanPawn;
    
    UPROPERTY(Transient)
    ATresRemyPawnBase* m_pBottlePawn;
    
    UPROPERTY(Transient)
    ATresRemyPawnBase* m_pFoodPawn;
    
public:
    ATresRemyCookingFlambeV2();
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintPure)
    float GetMaterialMaxAmount() const;
    
    UFUNCTION(BlueprintPure)
    float GetGameDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyCookingGameState> State);
    
};

