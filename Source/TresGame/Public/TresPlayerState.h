#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "TresPlayerState.generated.h"

class ATresPlayerState;
class UDamageType;

UCLASS()
class ATresPlayerState : public APlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TeamNo)
    int32 m_TeamNo;
    
public:
    ATresPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_TeamNo();
    
    UFUNCTION(Client, Reliable)
    void InformAboutKill(ATresPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, ATresPlayerState* KilledPlayerState);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastDeath(ATresPlayerState* KillerPlayerState, const UDamageType* KillerDamageType, ATresPlayerState* KilledPlayerState);
    
};

