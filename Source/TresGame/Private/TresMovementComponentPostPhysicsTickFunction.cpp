#include "TresMovementComponentPostPhysicsTickFunction.h"

void FTresMovementComponentPostPhysicsTickFunction::ExecuteTick(float DeltaTime, enum ELevelTick TickType, ENamedThreads::Type CurrentThread, const FGraphEventRef& MyCompletionGraphEvent)
{
	FActorComponentTickFunction::ExecuteTickHelper(Target, /*bTickInEditor=*/ false, DeltaTime, TickType, [this](float DilatedTime)
	{
		Target->PostPhysicsTickComponent(DilatedTime, *this);
	});
}

FString FTresMovementComponentPostPhysicsTickFunction::DiagnosticMessage()
{
	return Target->GetFullName() + TEXT("[UTresMovementComponentPostPhysicsTickFunction::PreClothTick]");
}

FTresMovementComponentPostPhysicsTickFunction::FTresMovementComponentPostPhysicsTickFunction() {
}

