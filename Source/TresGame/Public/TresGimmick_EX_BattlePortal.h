#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmick_EX_BattlePortal.generated.h"

class UTresReactorComponent;
class UParticleSystemComponent;
class ATresPlayerStart;
class USceneComponent;
class UTresNavModifierComponent;
class UParticleSystem;

UCLASS(Abstract, Config=Game)
class ATresGimmick_EX_BattlePortal : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_EffectBodyComp;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_EffectEscapeComp;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTresNavModifierComponent* NavModifier;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_PortalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_MapJumpPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_MapJumpPlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ATresPlayerStart* m_AutoSavePlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_GameFlagCheckCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_Effect_Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* m_Effect_Escape;
    
    ATresGimmick_EX_BattlePortal();
protected:
    UFUNCTION()
    void OnChangeBattleMode(bool bIsBattleMode);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnBattlePortalEscapeMode(bool IsEscape);
    
    UFUNCTION(BlueprintCallable)
    void BP_BattlePortalMapjump();
    
};

