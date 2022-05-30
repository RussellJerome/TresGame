#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickCommunicationInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable)
class UTresGimmickCommunicationInterface : public UInterface {
    GENERATED_BODY()
};

class ITresGimmickCommunicationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TresSendGimmickMessage(FName Name, FVector Param1, float Param2, int32 Param3, bool Param4, FName Param5, UObject* Param6);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TresGetGimmickMessage(FName Name, FVector Param1, float Param2, int32 Param3, bool Param4, FName Param5, UObject* Param6, FVector& Return1, float& Return2, int32& Return3, bool& Return4, FName& Return5, UObject*& Return6);
    
};

