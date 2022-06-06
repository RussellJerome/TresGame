#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresSequentialExecDataTable.h"
#include "Tres_EQS_ParamName.h"
#include "TresBTTask_SequentialExecProcess.generated.h"

class UEnvQuery;
class AActor;

UCLASS(Abstract, BlueprintType)
class UTresBTTask_SequentialExecProcess : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bViewNodeDetailed;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool m_bUseBlackboard;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKey;
    
    UPROPERTY(VisibleDefaultsOnly)
    UEnvQuery* m_TargetSelectQueryInstance;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<FTres_EQS_ParamName> m_EQSParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> m_pLogActor;
    
    UPROPERTY(VisibleDefaultsOnly)
    AActor* m_pInterfaceLogActor;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool m_bWaitGetTarget;
    
    UPROPERTY(VisibleDefaultsOnly)
    int32 m_TableCount;
    
    UPROPERTY(VisibleDefaultsOnly)
    FTresSequentialExecDataTable m_TableArray[16];
    
public:
    UTresBTTask_SequentialExecProcess();
};

