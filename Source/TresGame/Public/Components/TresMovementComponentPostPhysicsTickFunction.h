#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "TresMovementComponentPostPhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FTresMovementComponentPostPhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    TRESGAME_API FTresMovementComponentPostPhysicsTickFunction();

    /** TresCharMovementComponent that is the target of this tick **/
    class UTresCharMovementComponent* Target;

    /** 
     * Abstract function actually execute the tick. 
     * @param DeltaTime - frame time to advance, in seconds
     * @param TickType - kind of tick for this frame
     * @param CurrentThread - thread we are executing on, useful to pass along as new tasks are created
     * @param MyCompletionGraphEvent - completion event for this task. Useful for holding the completion of this task until certain child tasks are complete.
     **/
    virtual void ExecuteTick(float DeltaTime, enum ELevelTick TickType, ENamedThreads::Type CurrentThread, const FGraphEventRef& MyCompletionGraphEvent) override;

    /** Abstract function to describe this tick. Used to print messages about illegal cycles in the dependency graph **/
    virtual FString DiagnosticMessage() override;
};

template<>
struct TStructOpsTypeTraits<FTresMovementComponentPostPhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FTresMovementComponentPostPhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};
