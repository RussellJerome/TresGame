#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmick_e_ex781_StealPrizeBase.generated.h"

class USceneComponent;
class USoundBase;
class ATresCharPawnBase;

UCLASS(Abstract)
class ATresGimmick_e_ex781_StealPrizeBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_ParabolaHeight;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_SoundGet;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AspilAmount;
    
    UPROPERTY(Transient)
    ATresCharPawnBase* m_pGetter;
    
public:
    ATresGimmick_e_ex781_StealPrizeBase();
};

