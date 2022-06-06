#pragma once
#include "CoreMinimal.h"
#include "TresBTTask_SequentialExecProcess.h"
#include "Engine/DataTable.h"
#include "TresBTTask_SequentialExec.generated.h"

UCLASS()
class UTresBTTask_SequentialExec : public UTresBTTask_SequentialExecProcess {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDataTableRowHandle> m_CommonDataTableRowHandle;
    
public:
    UTresBTTask_SequentialExec();
};

