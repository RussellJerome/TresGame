#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "TresDecoratorInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UTresDecoratorInterface : public UInterface {
    GENERATED_BODY()
};

class ITresDecoratorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDecoratorFunctionNative(AActor* SelfActor, AActor* TargetActor, FVector TargetDestination, float valueA, float valueB);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsDecoratorFunction(AActor* SelfActor, AActor* TargetActor, FVector TargetDestination, float valueA, float valueB);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetDecoratorDescription(AActor* SelfActor, AActor* TargetActor, FVector TargetDestination, float valueA, float valueB);
    
};

