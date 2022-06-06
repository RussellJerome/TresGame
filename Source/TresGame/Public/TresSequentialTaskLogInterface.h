#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TresSequentialExecDataTable.h"
#include "Engine/DataTable.h"
#include "TresSequentialTaskLogInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UTresSequentialTaskLogInterface : public UInterface {
    GENERATED_BODY()
};

class ITresSequentialTaskLogInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    bool LogOutputTaskFinished(const FTresSequentialExecDataTable DataTable);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool LogOutputSequenceFinished(const FTresSequentialExecDataTable DataTable, const FDataTableRowHandle RowData);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool LogOutputQueryFinished(const FTresSequentialExecDataTable DataTable, const FDataTableRowHandle RowData);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool LogOutputProcessFinished(const FTresSequentialExecDataTable DataTable, const FDataTableRowHandle RowData);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool LogOutputExecuteSequence(const FTresSequentialExecDataTable DataTable, const FDataTableRowHandle RowData);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool LogOutputDecoratorSuccess(const AActor* MyPawn, const FTresSequentialExecDataTable DataTable, const FDataTableRowHandle RowData);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool LogOutputDecoratorFailed(const AActor* MyPawn, const FTresSequentialExecDataTable DataTable, const FDataTableRowHandle RowData);
    
};

