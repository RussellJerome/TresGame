#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemyEx711_TornadoInvolveParam.h"
#include "TresEnemyEx711_AthleticFlowLevelParam.h"
#include "TresEnemyEx711_HopLevelParam.h"
#include "TresEnemyEx711_GimmickBouncyPetsParam.h"
#include "TresEnemyEx711_GimmickBouncyPetsGroupParam.h"
#include "TresEnemyEx711_OuterScaffoldGroupParam.h"
#include "TresGimmick_e_ex711_PhysicsActorManager.generated.h"

class ATresGimmick_e_ex711_PhysicsActor;

UCLASS(HideDropdown)
class ATresGimmick_e_ex711_PhysicsActorManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_AthleticFlowRootNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_AthleticFlowOneRootNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AthleticFlowObjectDistXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AthleticFlowObjectDistZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AthleticFlowObjectRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AthleticFlowObjectYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AthleticFlowObjectPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AthleticFlowObjectLastRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AthleticFlowObjectLastRotSpeed2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ObjectDistMin_Test;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ObjectDistMax_Test;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ObjectMoveSpeedMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ObjectMoveSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HopActorOffsetHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HopActorHeightRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HopActorOffsetDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HopActorOffsetDistRange;
    
protected:
    UPROPERTY()
    TArray<ATresGimmick_e_ex711_PhysicsActor*> m_PhysicsActorArray;
    
    UPROPERTY()
    TArray<FTresEnemyEx711_HopLevelParam> m_HopLevelParamArray;
    
    UPROPERTY()
    TArray<ATresGimmick_e_ex711_PhysicsActor*> m_AthleticFlowActorArray;
    
    UPROPERTY()
    TArray<ATresGimmick_e_ex711_PhysicsActor*> m_AthleticFlowDummyActorArray;
    
    UPROPERTY()
    TArray<ATresGimmick_e_ex711_PhysicsActor*> m_ShootFlowActorArray;
    
    UPROPERTY()
    TArray<FTresEnemyEx711_AthleticFlowLevelParam> m_AthleticFlowLevelParamArray;
    
    UPROPERTY()
    TArray<FTresEnemyEx711_AthleticFlowLevelParam> m_AthleticFlowLevel2ParamArray;
    
    UPROPERTY()
    TArray<FTresEnemyEx711_TornadoInvolveParam> m_TornadoInvolveParamArray;
    
    UPROPERTY()
    TArray<FTresEnemyEx711_GimmickBouncyPetsParam> m_GimmickBouncyPetsParamArray;
    
    UPROPERTY()
    TArray<FTresEnemyEx711_GimmickBouncyPetsGroupParam> m_GimmickBouncyPetsGroupParamArray;
    
    UPROPERTY()
    TArray<FTresEnemyEx711_OuterScaffoldGroupParam> m_OuterScaffoldGroupParamArray;
    
public:
    ATresGimmick_e_ex711_PhysicsActorManager();
};

