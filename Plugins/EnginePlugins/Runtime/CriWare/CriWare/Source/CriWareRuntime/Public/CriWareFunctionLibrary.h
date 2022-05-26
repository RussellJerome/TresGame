#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CriWareFunctionLibrary.generated.h"

UCLASS()
class CRIWARERUNTIME_API UCriWareFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCriWareFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetGlobalLabelToSelectorByName(const FString& SelectorName, const FString& LabelName);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameVariableByName(const FString& GameVariableName, float Value);
    
};

