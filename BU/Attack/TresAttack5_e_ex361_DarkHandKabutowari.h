#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ETresEnemyEx361ThunderKind.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack5_e_ex361_DarkHandKabutowari.generated.h"

UCLASS(HideDropdown)
class UTresAttack5_e_ex361_DarkHandKabutowari : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bCancelStartMotion: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ThunderOmenTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_TargetThunderNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TargetThunderInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TargetThunderStTime;
    
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx361ThunderKind m_ThunderKind;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_NotTargetThunderNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_NotTargetThunderContinuousNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NotTargetThunderInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NotTargetThunderStTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NotTargetThunderMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_NotTargetThunderMaxDist;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector2D> m_NotTargetThunderList;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WarpOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FallSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WarpDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FallDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FallMoveRate;
    
public:
    UTresAttack5_e_ex361_DarkHandKabutowari();
};

