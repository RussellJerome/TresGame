#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresSpawnRuleChildGenerator.h"
#include "UObject/Interface.h"
#include "TresGeneratorInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UTresGeneratorInterface : public UInterface {
    GENERATED_BODY()
};

class ITresGeneratorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPIE_SetGeneratedSize(float Size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPIE_SetGeneratedNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPIE_SetGeneratedClass(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPIE_RequestRebuild();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetChildGeneratorRule(const FTresSpawnRuleChildGenerator& Data);
    
};

