#pragma once
#include "CoreMinimal.h"
#include "TresGimmickStaticBase.h"
#include "TresGimmickBattleWall.generated.h"

UCLASS(Abstract, Config=Game)
class ATresGimmickBattleWall : public ATresGimmickStaticBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_EnableChangeCinematicEvent;
    
    ATresGimmickBattleWall();
protected:
    UFUNCTION()
    void OnChangeCinematicModeProc(bool bIsCinematicMode);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPEV_OnChangeCinematicMode(bool bIsCinematicMode);
    
};

