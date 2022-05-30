#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "Tres_InterfaceDecorator.h"
#include "SEQUENTIAL_EXEC_TASK_MODE.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "Tres_EQS_ParamName.h"
#include "TresSequentialExecDataTable.generated.h"

class UEnvQuery;
class UTresLocomotionDefinitionBase;

USTRUCT(BlueprintType)
struct FTresSequentialExecDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_OutlineComment;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTres_InterfaceDecorator> m_DecoratorArray;
    
    UPROPERTY(EditDefaultsOnly)
    SEQUENTIAL_EXEC_TASK_MODE m_taskMode;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_skipSequence;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_QueryInstance;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bQueryFirstRun;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimeLimit;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryRunMode::Type> m_RunMode;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UpdateTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UpdateTimeRandomDeviation;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTres_EQS_ParamName> m_ParamName;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTresLocomotionDefinitionBase> m_LocomotionDefinition;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AcceptanceRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AvoidanceWeight;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bPreciseArrival: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bFastAbort: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bFailOnDamageReaction: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FString m_Memo;
    
    TRESGAME_API FTresSequentialExecDataTable();
};

